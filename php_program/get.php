<?php
  if( $_GET["name"] && $_GET["password"] )
  {
     echo "Welcome ". $_GET['name']. "<br />";
     echo "Your password is ". $_GET['password'] . "<br/>";
     $input = $_SERVER['QUERY_STRING'];
	 var_dump($input);
	 exit();
  }
?>