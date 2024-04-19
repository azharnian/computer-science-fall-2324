<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Counter</title>
</head>
<body>
    <?php
        $index = 1;
        while($index <= 5){
            echo $index . "<br>";
            $index++;
        }

        for($i = 1; $i <= 5; $i++){
            echo $i . "<br>";
        }

        $numbers = array(4, 10, 20, 8);
        for($i = 0; $i < count($numbers); $i++){
            echo $numbers[$i] . "<br>";
        }
    ?>
</body>
</html>