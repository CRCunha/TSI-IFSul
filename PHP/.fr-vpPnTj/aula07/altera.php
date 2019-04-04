<?php //altera.php
include("conecta.php");
include("funcoes.php");
if(isset($_REQUEST['enviar'])){
	//carrega dados da pessoa
	if($_REQUEST['enviar']=='alterar'){
		//consultar o banco
		$codigo = $_REQUEST['codigo'];
		try {
			$sql = "select * from pessoa where cdpessoa=$codigo";
			$consulta = $link->prepare($sql);
			$consulta->execute();
			$registro = $consulta->fetch(PDO::FETCH_ASSOC);
			$nome = $registro['nome'];
			//separa o campo nascimento em 3 partes 
			//.    substr($texto                  ,inicio,comprimento);
			$dia = substr($registro['nascimento'],8,2);
			$mes = substr($registro['nascimento'],5,2);
			$ano = substr($registro['nascimento'],0,4);
			//inclui formularo com dados
			include("altera_form.php");

		}
		catch(PDOException $ex){
		echo($ex->getMessage());
		echo($sql);
		}	
	}
	//faz a gravacao dos dados alterados
	if($_REQUEST['enviar']=='SALVAR'){
		//consultar o banco
		$codigo = $_REQUEST['codigo'];
		$nome = $_REQUEST['nome'];
		try {
			$sql = "update pessoa set nome='$nome' where cdpessoa=$codigo";
			$consulta = $link->prepare($sql);
			$consulta->execute();

		}
		catch(PDOException $ex){
		echo($ex->getMessage());
		}	
	}

}

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
							  "value"=>"alterar",
							  "type"=>"submit"));
	fechaTag("form");
}
catch(PDOException $ex){
	echo($ex->getMessage());
}


?>