<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>My PHP</title>
</head>
<body>
    <?php
        echo("Hello, my PHP!");


        // Variables
        $name = "John";
        $age = 40;
        $height = 170.5;

        echo("My name is $name");
        echo("This year I'm $age years old.");
        echo $height;

        //String
        $phrase = "Come on!";
        echo $phrase;
        echo strtoupper($phrase);
        echo strlen($phrase);
        echo $phrase[0];
        echo $phrase[-1];
        echo substr($phrase, 2, 5);

        //Number
        echo 10 + 9;
        echo 10 % 3;
        echo 10 + 5 * 8;
        echo (10 + 5) * 8;
        $num = 10;
        $num++;
        $num += 20;
        echo $num;
        echo abs($num);
        echo max(10, 40);
        echo min(10, 40);
        echo round(3.17);

    ?>
</body>
</html>