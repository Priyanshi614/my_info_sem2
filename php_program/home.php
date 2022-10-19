<?php
if(!isset($_COOKIE['username']) && !isset($_COOKIE['password']))
{
    $time = 120 + time();
    setcookie('username',$_POST['username'], $time);
    setcookie('password',$_POST['password'], $time);
    exit();
}
else
{
    if($_COOKIE['username']==$_POST['username'] && $_COOKIE['password']==$_POST['password'] )
    {
        echo "
        <!doctype html>
        <html>
        <head>
        <style>
        body{
            padding:0;
            margin:0;
        }
        </style>
        <form>
        <table border='1' >
        <tr>
            <th text-align:'center'><h1>Home Page</h1></th>
            <td><a href='http://localhost/pr/logout.php'><b>Signout</b></a></td>
        </tr>
        <tr>
            <td colspan='2'>Welcome" .$_POST['username']."</td>
        </tr>.
        </form>";
        }
        else
            echo "Username/Password Invalid";
    }
?>