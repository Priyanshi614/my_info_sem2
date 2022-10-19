<?php
	$servername = "localhost";
	$username = "root";
	$password = "";
	$database = "employees";
	$conn = mysqli_connect($servername,$username,$password,$database);
	if($conn)
	{
		echo "successful";
	}
	else
	{
		echo "not";
	}
	$sql = "CREATE TABLE `mytable` ( `no` INT(11) NOT NULL AUTO_INCREMENT , 
	`name` VARCHAR(20) NOT NULL , `salary` INT(11) NOT NULL , `address` VARCHAR(30) NOT NULL , 
	PRIMARY KEY (`no`))";

	$result = mysqli_query($conn,$sql);
	
	if($result)
	{
		echo "is successful";
	}
	else
	{
		echo "retry";
	}
	
?>