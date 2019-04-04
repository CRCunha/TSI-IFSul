<?php
//inclui.php
include("conecta.php");
include("inclui_form.php");
//botao enviar
if(isset($_REQUEST['enviar'])){
	$nome = $_REQUEST['nome'];
	$nascimento = $_REQUEST['ano'] . "-" . $_REQUEST['mes'] . "-" . $_REQUEST['dia'];
	$sql = "insert into pessoa (nome,nascimento) values ('$nome','$nascimento')";
	echo("$sql<br>");
	try {
		//$link foi criado no conecta.php
		$consulta = $link->prepare($sql);
		$consulta->execute();
		echo ("Incluido com sucesso!");
	}
	catch(PDOException $ex){
		echo($ex->getMessage());
	}
}//fim botao enviar
?>