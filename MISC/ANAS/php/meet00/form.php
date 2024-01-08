<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form</title>
</head>
<body>
    <form action="form.php" method="get">
        <label>Name:</label> <input type="text" name="name">
        <label>Age</label> <input type="number" name="age">
        <input type="submit" value="Submit">
    </form>

    <?php 
        if (isset($_GET["name"])){
            $name = $_GET["name"];
            echo $name;
        }
    ?>

    <?php echo ( "your number is " . ($_GET["age"] ?? "not set") ) ?>
</body>
</html>