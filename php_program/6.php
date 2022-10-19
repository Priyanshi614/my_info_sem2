<?php
	// Create a simple array.
	$array = array(1, 2, 3, 4, 5);
	print_r($array);

	echo "<br/>";

	for($i=0; $i<count($array); $i++)
	{
		echo $array[$i];
	}
	echo "<br/>";

	foreach ($array as $i) 
	{
		echo $i;
	}
	echo "<br/>";
	
	foreach ($array as $i=>$v) 
	{
		echo $i . "=>" . $v . "<br/>";
	}
	echo "<br/>";

?>
