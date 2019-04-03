<?php
include("conecta.php");
include("funcoes.php");

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

try {
    $sql = "select cdpessoa,nome,nascimento from pessoa order by nome";
    $consulta = $link->prepare($sql);
    $consulta->execute(); 
    abreTag("form");
    while ($registro = $consulta->fetch(PDO::FETCH_ASSOC)) {
        $cdpessoa = $registro['cdpessoa'];
        
        $nome = utf8_encode($registro['nome']);
        
        $nascimento = strftime("%d/%m/%Y",strtotime($registro['nascimento'])); 
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