<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>What's your grade</title>
</head>
<body>
    <form action="" method="post">
        What was your grade?
        <input type="text" name="grade" id="">
        <input type="submit" value="Check">
    </form>

    <?php
        $grade = $_POST["grade"];
        switch($grade){
            case "A":
                echo "You did amazing!";
                break;
            case "B":
                echo "You did pretty good!";
                break; 
            case "C":
                echo "You did poorly!";
                break;
            default:
                echo "Invalid Grade";
                break;
        }
    ?>
</body>
</html>