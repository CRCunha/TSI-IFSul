<!DOCTYPE html>
<html>

<head>
    <title>Teste</title>
    <!--METAS-->
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="keywords" content="portfolio, web, developer, design, layout, UI, UX">
    <meta name="language" content="PT-BR">
    <meta name="author" content="Nome">
    <meta name="robots" ontent="noindex">
    <meta name="googlebot" content="noindex">
    <!--LINKS-->
    <link rel="stylesheet" type="text/CSS" href="CSS/GERAL/GERAL.css">
    <link rel="stylesheet" type="text/CSS" href="CSS/NORMALIZE/NORMALIZE.css">
    <link rel="stylesheet" type="text/CSS" href="CSS/01-HEADER/header.css">
    <link rel="stylesheet" type="text/CSS" href="CSS/02-MAIN/main.css">
    <!--FONTES-->
    <link href="https://fonts.googleapis.com/css?family=Nunito" rel="stylesheet">
    <!--FAV ICON-->
    <link rel="shortcut icon" type="" href="" />
</head>

<body>
    <!-- 01 HEADER-->
    <header>
        <img src="IMG/01-HEADER/user.png">
        <div class="return">
            <div class="container">
                <a href="index.html"><img src="IMG/01-HEADER/return.png"></a>
            </div>
        </div>
    </header>
    <!-- 02 MAIN -->
    <main>
        <form method="POST" action="login.php">
            <input id="i1" type="email" name="email" placeholder="Email" autocomplete="off">
            <input type="password" name="password" placeholder="Password" autocomplete="off">
            <input type="submit">
        </form>
    </main>
</body>

</html>