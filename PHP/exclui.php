<?php
include("conecta.php");
include("front.php");
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
	$sql = "select cdpessoa,email from pessoa order by cdpessoa";
	$consulta = $link->prepare($sql);
	$consulta->execute();
	//enquanto tem registros disponíveis 
	//na consulta, copia cada um deles 
	//para o vetor associativo $registro 
	while ($registro = $consulta->fetch(PDO::FETCH_ASSOC)) {
		$cdpessoa = $registro['cdpessoa'];
		//acerta acentuação para UTF8
		$email = utf8_encode($registro['email']);
		abreTag("input",array("name"=>"codigo","value"=>"$cdpessoa","type"=>"radio"));
		echo("$cdpessoa - $email<br>");
	}
	abreTag("input",array("name"=>"enviar","value"=>"deletar","type"=>"submit"));
	fechaTag("form");
}
catch(PDOException $ex){
	echo($ex->getMessage());
}

?>