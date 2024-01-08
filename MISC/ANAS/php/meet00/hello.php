<?php

echo("Hello, world!\n");

echo("Enter your name : ");
$name = fgets(STDIN);
$name = trim($name);

echo("Hello $name!\n");

?>