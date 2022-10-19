<?php
	$servername = "localhost";
	$username = "root";
	$password = "";
	$database = "employees";
	$conn = mysqli_connect($servername,$username ,$password ,$database);
	if($conn)
	{
		echo "sucessfull1";
	}
	else 
	{
		echo "retry";
	}
	$srno = $_post["srno"];
	$name = $_post["name"];
	$salary = $_post["salary"];
	$age = $_post["age"];
	
	$sql =" INSERT INTO `employee1`(`no`, `Name`, `salary`, `age`) VALUES ('$srno','$name','$salary','$age')";

	$result = mysqli_query($conn,$sql);
	if($result)
	{
		echo "Sucessfull2";
	}
	else
	{
		echo "not";
	}
	
	
?>
<html>
<head>
	<title>employee1</title>
</head>
<body>
<table>
<tr>
	<td>sr no.</td>
	<td><?php echo $no; ?></td>
</tr>
<tr>
	<td>name</td>
	<td><?php echo $name; ?></td>
</tr>
<tr>
	<td>salary</td>
	<td><?php echo $salary; ?></td>
</tr>
<tr>
	<td>age</td>
	<td><?php echo $age; ?></td>
</tr>
</body>
</html>
	
	
