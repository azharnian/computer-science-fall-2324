<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Movie</title>
</head>
<body>
    <?php
        class Movie {
            public $title;
            private $rating;

            function __construct($title, $rating){
                $this->title = $title;
                $this->setRating($rating);
            }

            // GETTER
            function getRating(){
                return $this->rating;
            }

            //SETTER
            function setRating($newRating){
                if($newRating == "G" || $newRating == "PG" || $newRating == "PG-13" || $newRating == "R" || $newRating == "NR")
                    $this->rating = $newRating;
                else
                $this->rating = "NR";
            }

        }

        $avengers = new Movie("Avngers", "PG-13");
        $avengers->setRating("Dog");

        echo $avengers->getRating() . "<br>";
    ?>
</body>
</html>