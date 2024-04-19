<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Madlibs Game</title>
</head>
<body>

    <form action="" method="get">
        <label for="color">Color</label>
        <input type="text" name="color" id="">
        <br>

        <label for="noun">Plural Noun</label>
        <input type="text" name="noun" id="">
        <br>

        <label for="celeb">Celebrity</label>
        <input type="text" name="celeb" id="">
        <br>

        <input type="submit" value="Submit">
    </form>
    <?php
    if (isset($_GET["color"]) && isset($_GET["noun"]) && isset($_GET["celeb"])){
        $color = $_GET["color"];
        $noun = $_GET["noun"];
        $celeb = $_GET["celeb"];
        echo "Roses are $color<br>";
        echo "$noun are blue<br>";
        echo "I love $celeb<br>";
    }
        
    ?>
</body>
</html>