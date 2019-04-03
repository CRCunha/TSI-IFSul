<form>
    Inicial<input type="text" name="inicial" size="1" maxlength="1">
	Ordem: <input type="radio" name="ordenacao" value="ASC">Crescente - <input type="radio" name="ordenacao" value="DESC">Decrescente<br>
	<input type="submit" name="enviar" value="OK">
</form>
<hr>
<?php
include("conecta.php");

if(isset($_REQUEST['enviar'])){
	$inicial = $_REQUEST['inicial'];
	$ordenacao = $_REQUEST['ordenacao'];
}

try {
    
	$consulta = $link->prepare($sql);
	$consulta->execute();  
	while ($registro = $consulta->fetch(PDO::FETCH_ASSOC)) {
		$cdpessoa = $registro['cdpessoa'];
		
		$nome = utf8_encode($registro['nome']);
        
        $nascimento =  strftime("%d/%m/%Y",strtotime($registro['nascimento']));	
		echo("$cdpessoa - $nome - $nascimento<br>");
	}
}
catch(PDOException $ex){
	echo($ex->getMessage());
}

?>