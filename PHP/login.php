<?php

include("conecta.php");

$email = $_REQUEST['email'];
$password = $_REQUEST['password'];
$sql = "select * from pessoa where email = '%email' and senha = '$password'";

try {
	$consulta = $link->prepare($sql);
    $consulta->execute();
    
    $result = mysqli_query($link, $sql);

    $row = mysqli_num_rows($result);
    
    if($row == 1) {
    	echo("OK");
    } else {
    	echo("Erro");
    }

    // header("Location: index.html");
    // die();

}
catch(PDOException $ex){
	echo("Deu erro! <br>". $ex->getMessage());
}
?>