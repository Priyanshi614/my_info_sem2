<?php
if (!isset($_SESSION['count'])) 
{
    $_SESSION['count'] = 0;
} 
else 
{
    $_SESSION['count']++;
}
?>
<form action=index.php" method="Post">
<table border='1'>
<tr>
    <td>Username: </td>
    <td><input type="textbox" name="username" required></td>
</tr>
<tr>
    <td>Password: </td>
    <td><input type="password" name="password" required></td></tr>
<tr>
<tr>
    <td><input type="submit" name="submit" value="Submit Query"></td>
    <td><input type="reset" name="reset" value="Reset"></td>
</tr>
<tr>
    <td colspan="2"><a href="http://localhost/pr/registration.php/">New User</a>
</tr>
</table>
</form>
