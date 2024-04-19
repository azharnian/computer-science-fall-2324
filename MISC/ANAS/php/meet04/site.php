<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP Include</title>
</head>
<body>
    <?php include "header.html" ?>
    <h1>Hello, World!</h1>

    <article>
        <?php
            $title = "My First Post";
            $author = "Mike";
            $wordCount = 400;

            include "article-header.php";
        ?>
    </article>

    <?php include "footer.html" ?>

    <?php
        include "useful-tools.php";
        sayHi("Mike");
        echo $feetInMile;
    ?>
</body>
</html>