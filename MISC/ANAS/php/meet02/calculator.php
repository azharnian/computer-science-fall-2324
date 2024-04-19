<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculator</title>
</head>
<body>
    <form action="" method="get">
        <input type="number" name="number1" id="">
        <br>
        <input type="number" name="number2" id="">
        <br>
        <input type="submit" value="Submit">
    </form>

    <?php
        if(isset($_GET["number1"]) && isset($_GET["number2"])) {
            echo $_GET["number1"] + $_GET["number2"];
        };
    ?>
</body>
</html>