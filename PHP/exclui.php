<?php
include("conecta.php");
include("front.php");

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
}

$sql = "select * from pessoa";
try {
	//$link foi criado no conecta.php
	$consulta = $link->prepare($sql);
	$consulta->execute();

	while ($registro = $consulta->fetch(PDO::FETCH_ASSOC)) {
		$cdpessoa = $registro['cdpessoa'];
		$email = $registro['email'];
		$senha =  $registro['senha'];	

		echo("<div class='dado'> <div class='code'  id='code' onclick='numero()'>$cdpessoa</div>  <div class='email'>$email</div></div>");
	}
}
catch(PDOException $ex){
	echo($ex->getMessage());
}
echo("<form method='POST'><input type='number' name='codigo' placeholder='Digite o numero'>");
echo("<input type='submit' name='enviar' placeholder='Excluir' value='Excluir' id='excluir'></form>");
?>