<form>
	Inicial<input type="text" name="inicial" size="1" maxlength="1">
	Ordem: <input type="radio" name="ordenacao" value="ASC">Crescente - <input type="radio" name="ordenacao" value="DESC">Decrescente<br>
	<input type="submit" name="enviar" value="OK">
</form>
<hr>
<?php
include("conecta.php");
setlocale(LC_ALL, 'pt_BR','pt_BR.utf-8','pt_BR.utf-8','portuguese');
date_default_timezone_set('America/Sao_Paulo');
//novo -----------------------
$inicial = "";
$sqlAux = "";
$ordenacao = "";
if(isset($_REQUEST['enviar'])){
	$inicial = $_REQUEST['inicial'];
	$ordenacao = $_REQUEST['ordenacao'];
}
if ($inicial != ""){
		$sqlAux = " where nome  LIKE '$inicial%' ";
}
$sql = "select cdpessoa,nome,nascimento from pessoa $sqlAux order by nome $ordenacao";
echo("$sql<br>");
//-----------------------------

try {
	
	$consulta = $link->prepare($sql);
	$consulta->execute();  
	while ($registro = $consulta->fetch(PDO::FETCH_ASSOC)) {
		$cdpessoa = $registro['cdpessoa'];
		//acerta acentuação para UTF8
		$nome = utf8_encode($registro['nome']);
		//%B nome do mes extenso, %m mes com 2 digitos
		//%Y ano com quatro dígitos ,%A dia da semana extenso
		$nascimento =  strftime("%d/%m/%Y",strtotime($registro['nascimento']));	
		echo("$cdpessoa - $nome - $nascimento<br>");
	}
}
catch(PDOException $ex){
	echo($ex->getMessage());
}

?>