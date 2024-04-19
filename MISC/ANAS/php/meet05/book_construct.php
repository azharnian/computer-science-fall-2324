<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Object and Classes : Book</title>
</head>
<body>
    <?php
        class Book {
            var $title;
            var $author;
            var $pages;

            function __construct($aTitle="", $aAuthor="", $aPages=0){
                $this->title = $aTitle;
                $this->author = $aAuthor;
                $this->pages = $aPages;

                echo "New Book Created <br>";
            }
        }

        $book1 = new Book();
        $book1->title = "Harry Potter";
        $book1->author = "JK Rowling";
        $book1->pages = 400;

        $book2 = new Book();
        $book2->title = "The Lord of The Rings";
        $book2->author = "Tolkien";
        $book2->pages = 700;

        $book3 = new Book("The Hunger Games", "Suzzane Collins", 500);

        echo $book1->author . "<br>";
        echo $book2->author . "<br>";
        echo $book3->author . "<br>";
    ?>
</body>
</html>