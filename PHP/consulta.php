
<?php
include("conecta.php");
include("front.php");
setlocale(LC_ALL, 'pt_BR','pt_BR.utf-8','pt_BR.utf-8','portuguese');
date_default_timezone_set('America/Sao_Paulo');
//novo -----------------------
$sql = "select * from pessoa";
//-----------------------------

try {
	//$link foi criado no conecta.php
	$consulta = $link->prepare($sql);
	$consulta->execute();

	while ($registro = $consulta->fetch(PDO::FETCH_ASSOC)) {
		$cdpessoa = $registro['cdpessoa'];
		$email = $registro['email'];
		$senha =  $registro['senha'];	

		echo("<div class='dado'> <div class='code'>$cdpessoa</div>  <div class='email'>$email</div></div>");
	}
}
catch(PDOException $ex){
	echo($ex->getMessage());
}

?>