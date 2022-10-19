?php
// Include config file
require_once "config.php";
 
// Define variables and initialize with empty values

 
// Processing form data when form is submitted
if($_SERVER["REQUEST_METHOD"] == "POST"){ 
        $uname = $link -> real_escape_string($_POST['username']);
		$pass = $link -> real_escape_string($_POST['userpassword']);
        $sql = "Select * from users where username='$uname' and password='$pass'";
		if ($result = $link -> query($sql)) {
		session_start();
		while($row = $result->fetch_assoc()) {
		$_SESSION['user'] = $row["username"];
		$_SESSION['userid'] = $row["id"];
		header("Location:profile.php");
  }
		
		//echo "Returned rows are: " . $result -> num_rows;
		// Free result set
		$result -> free_result();
}

    // Close connection
    mysqli_close($link);
}
?>
 
<!DOCTYPE html>
<html lang="en">
<head>
    <title>Login</title>
</head>
<body>
<h2>Login</h2>

<p>Please fill this form and submit to Login to university system</p>
<form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" method="post">
	
	<div>
		<label>Username</label>
		<input type="text" name="username">
	</div>
	<br/>
	<div>
		<label>Password</label>&nbsp;
		<input type="password" name="userpassword">
	</div>
	<input type="submit" value="Submit">
</form>
                
</body>
</html>