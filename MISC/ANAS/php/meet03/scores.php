<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Assosiative Arr : Scores</title>
</head>
<body>
    <form action="" method="post">
        Student : <input type="text" name="student" id="">
        <br>

        <input type="submit" value="Find">
    </form>
    
    <?php
        $grades = array(
            "Jim" => "A+",
            "Pam" => "B-",
            "Oscar" => "C+"
        );
        if (isset($_POST["student"])){
            if (isset($grades[$_POST["student"]])){
                echo $grades[$_POST["student"]];
            } else {
                echo "Not found!";
            }
        };
    ?>
</body>
</html>