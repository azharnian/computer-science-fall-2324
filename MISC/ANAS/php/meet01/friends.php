<?php

$friends = array("Kevin", "Karen", "Oscar", "Jim");

echo $friends[0] . "\n";

$friends[3] = 1000;

echo $friends[3] . "\n";

echo count($friends) . "\n";

foreach ($friends as $friend)
{
    echo $friend . "\n";
}

?>