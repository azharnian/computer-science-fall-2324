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
        }

        $book1 = new Book;
        $book1->title = "Harry Potter";
        $book1->author = "JK Rowling";
        $book1->pages = 400;

        $book2 = new Book;
        $book2->title = "The Lord of The Rings";
        $book2->author = "Tolkien";
        $book2->pages = 700;

        echo $book1->author . "<br>";
        echo $book2->author . "<br>";
    ?>
</body>
</html>