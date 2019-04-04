<?php
include("conecta.php");
include("funcoes.php");
//exclusao!!!!!!
if(isset($_REQUEST['enviar'])){
	$codigo = $_REQUEST['codigo'];
	try {
		$sql = "delete from pessoa where cdpessoa=$codigo";
		$consulta = $link->prepare($sql);
		$consulta->execute();

	}
	catch(PDOException $ex){
	echo($ex->getMessage());
	}	

}// fim exclusao

//listagem 
try {
	//$link foi criado no conecta.php
	$sql = "select cdpessoa,nome,nascimento from pessoa order by nome";
	$consulta = $link->prepare($sql);
	$consulta->execute();
	//enquanto tem registros disponíveis 
	//na consulta, copia cada um deles 
	//para o vetor associativo $registro 
	abreTag("form");
	while ($registro = $consulta->fetch(PDO::FETCH_ASSOC)) {
		$cdpessoa = $registro['cdpessoa'];
		//acerta acentuação para UTF8
		$nome = utf8_encode($registro['nome']);
		//%B nome do mes extenso, %m mes com 2 digitos
		//%Y ano com quatro dígitos ,%A dia da semana extenso
		$nascimento =  strftime("%d/%m/%Y",strtotime($registro['nascimento']));	
		abreTag("input",array("name"=>"codigo",
							  "value"=>"$cdpessoa",
							  "type"=>"radio"));
		echo(" $cdpessoa - $nome - $nascimento<br>");
	}
	abreTag("input",array("name"=>"enviar",
							  "value"=>"deletar",
							  "type"=>"submit"));
	fechaTag("form");
}
catch(PDOException $ex){
	echo($ex->getMessage());
}

?>