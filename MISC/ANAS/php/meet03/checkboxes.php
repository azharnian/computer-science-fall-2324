<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Checkboxes : Fruits</title>
</head>
<body>
    <form action="" method="post">
        Apples: <input type="checkbox" name="fruits[]" id="" value="apples"><br>
        Oranges: <input type="checkbox" name="fruits[]" id="" value="oranges"><br>
        Pears: <input type="checkbox" name="fruits[]" id="" value="pears"><br>

        <input type="submit" value="Submit">
    </form>

    <?php
        if(isset($_POST["fruits"])){
            $fruits = $_POST["fruits"];
            foreach($fruits as $fruit){
                echo $fruit . "<br>";
            };
        }
    ?>
</body>
</html>