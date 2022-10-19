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
	
$sql = "UPDATE `mytable` SET `no`=[2],`name`=['maisuri'],`salary`=[1500],`address`=['wadala'] WHERE  no = '2'";
$result = mysqli_query($conn,$sql);
if($result)
	{
		echo "is successful";
	}
	else
	{
		echo "retry";
		echo mysqli_error;
	}
	
?>

