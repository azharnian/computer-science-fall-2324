<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Password</title>
</head>
<body>
    <form action="" method="post">
    <label for="password">Password :</label>
        <input type="text" name="password" id="">
        <br>
        <input type="submit" value="Submit">
    </form>

    <?php
        if(isset($_POST["password"]))
            echo $_POST["password"];
    ?>
</body>
</html>