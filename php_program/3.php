<?php
	$no1=2;
	$no2=$no1;
	$str1='2';
	if($no1==$str1)
	{
		echo "Value is equal." . '<br/>';
	}
	if($no1===$str1)
	{
		echo "Type and value both are equal." . '<br/>';
	}
	else
	{
		echo "Value is equal, but type is different" . '<br/>';
		var_dump($no1, $str1);	
	}
?>
