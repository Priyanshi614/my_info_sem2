<?php
	$servername = "localhost";
	$username = "root";
	$password = "";
	$databasename = "employees";
	$conn = mysqli_connect($servername,$username,$password,$databasename);
	$sql = CREATE TABLE `employees2` ( ` no` INT(11) NOT NULL AUTO_INCREMENT , `name` VARCHAR(20) NOT NULL , `salary` INT(11) NOT NULL , `address` VARCHAR(30) NOT NULL , PRIMARY KEY (`index no`)) ENGINE = InnoDB;

	mysqli_query($conn,$sql);
	
	
?>