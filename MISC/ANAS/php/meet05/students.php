<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Students</title>
</head>
<body>
    <?php
        class Student {
            var $name;
            var $major;
            var $gpa;

            function __construct($aName="", $aMajor="", $aGpa=0){
                $this->name = $aName;
                $this->major = $aMajor;
                $this->gpa = $aGpa;
            }

            function hasHonors(){
                if ($this->gpa >= 4.0)
                    return "true";
                return "false";
            }
        }

        $student1 = new Student("Jim", "Business", 2.8);
        echo $student1->hasHonors();

    ?>
</body>
</html>