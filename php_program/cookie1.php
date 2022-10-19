<!DOCTYPE html>
<?php
$cookie_name = "user";
$cookie_value = "priyanshi";
setcookie($cookie_name, $cookie_value, time() + (86400 * 30), "/"); // 86400 = 1 day
setcookie (“mycookie”, “”, time() – 3600);
// setcookie (“mycookie”, “”, time() – 3600, “/dir1/”);
?>
<html>
<body>

<?php
if(!isset($_COOKIE[$cookie_name])) {
     echo "Cookie named '" . $cookie_name . "' is not set!";
} else {
     echo "Cookie '" . $cookie_name . "' is set!<br>";
     echo "Value is: " . $_COOKIE[$cookie_name];
}
?>

<p><strong>Note:</strong> You might have to reload the page to see the value of the cookie.</p>

</body>
</html>