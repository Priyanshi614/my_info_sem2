<?php 

	if($_SERVER["REQUEST_METHOD"] == "POST")
	{
		$servername = "localhost";
        $username = "root";
        $password = "";
        $database="music";

// Create connection
        $conn = new mysqli($servername, $username, $password,$database);

// Check connection
        if ($conn->connect_error) {
             die("Connection failed: " . $conn->connect_error);
    
            }

        $sql = "SELECT * FROM `music`";
        $result = mysqli_query($conn,$sql);
        $row=mysqli_fetch_assoc($result);
        $count = $row['COUNT'];
        $totle = $row['TOTAL'];
        $rating1= $_POST["rating"];



        $sql= "UPDATE `music` SET  `TOTAL` = $rating1+$totle WHERE `music`.`sr` = 1"; 
        $retval1 = mysqli_query($conn,$sql);


        $sql = 'UPDATE music SET COUNT=COUNT+1 WHERE sr=1';
        $retval = mysqli_query($conn,$sql);


        $avg = ($totle+$rating1)/($count+1);

        $sql= "UPDATE `music` SET  `rating` = $avg WHERE `music`.`sr` = 1";              
        $retval33 = mysqli_query($conn,$sql);
}

?>


<!DOCTYPE html>
<html lang="en">
<head>
        <meta charset="UTF-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Document</title>
</head>
<body>

<h1>YOUR RATING RECORDED SUCCESSFULLY </h1>
<h2>NEW RATING OF THIS SONG IS <?php echo $avg ?></h2>
<br>
<button><a href="INDEX.php">HOME</a></button>
        
</body>
</html>