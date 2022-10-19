<DOCTYPE html>
<html>
<body>
<form action="registration.php"method="POST"autocomplete="off">
<h1>UserLogin</h1>
<label for="user">Username :</label>
<input type="text" name="user"id="user">
<br>
<label for="password">Password :</label>
<input type="password" name="password"id="password">
<br>
<label for="check">Remember Me: </label>
<input type="checkbox" name="check"id="check">
<br>
<input type="submit"value="Login" name="Login">
</form>
</body>
</html>
<?php
if(!empty($_POST["user"]) &&!empty($_POST["password"]))
{
if($_POST["user"]!="prince" &&$_POST["password"]!="prince")
{
echo "Username/Passwordinvalid.";
}
else
{
if(isset($_COOKIE['firstcookie']))
{
echo "You are already loggedin...";
}
else
if(isset($_POST["check"]))
{
setcookie('firstcookie','data',time()+60*2);
echo"OK. so now cookie is set for 2 minute.";
}
else
{
setcookie('firstcookie','data',time()+60*1); 
echo"OK. sonow cookie is set for a minute.";
} }
}
else if(isset($_POST["user"]) ||isset($_POST["password"]))
{
echo"You must supply a user name and password .";
}
?>