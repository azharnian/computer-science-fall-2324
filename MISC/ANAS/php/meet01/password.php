<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Password</title>
</head>
<body>
    <form action="password.php" method="post">
        <label for="">Password</label>
        <input type="password" name="password" id="">

        <input type="submit" value="Login!">
    </form>

    <?php
        echo("your password is " . ($_POST["password"] ?? "not set yet."));
    ?>
</body>
</html>