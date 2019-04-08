<?php

include("conecta.php");

$email = $_REQUEST['email'];
$password = $_REQUEST['password'];

$sql = "insert into pessoa (email,senha) values ('$email','$password')";
try {
	$consulta = $link->prepare($sql);
	$consulta->execute();
}
catch(PDOException $ex){
	echo("Deu erro! <br>". $ex->getMessage());
}

header("Location: index.php");
die();
?>