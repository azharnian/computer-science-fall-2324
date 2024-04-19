<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Function : Say Hi!</title>
</head>
<body>
    
    <?php
        function sayHi($name, $age){
            echo "Hello, " . $name . " you are " . $age . " years old!<br>";
        }

        function cube($side){
            return $side * $side * $side;
        }

        sayHi("Tom", 40);
        sayHi("Oscar", 80);

        echo "The cube is " . cube(10) . "<br>";
    ?>
</body>
</html>