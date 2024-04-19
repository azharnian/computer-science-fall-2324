<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Inheritance : Chef</title>
</head>
<body>
    <?php
        class Chef {

            function makeChicken(){
                echo "The chef make chicken<br>";
            }

            function makeSalad(){
                echo "The chef make salad<br>";
            }

            function makeSpecialDish(){
                echo "The chef make BBQ Ribs<br>";
            }

        }

        class ItalianChef extends Chef {
            function makePasta(){
                echo "The chef make pasta<br>";
            }

            function makeSpecialDish(){
                echo "The chef make chicken parm<br>";
            }
        }

        $chef = new Chef();
        $chef->makeChicken();

        $italianChef = new ItalianChef();
        $italianChef->makeSalad();
        $italianChef->makePasta();
        $italianChef->makeSpecialDish();
    ?>
</body>
</html>