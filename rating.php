<?php 
$count = 0;
$total = 0;
	if($_SERVER["REQUEST_METHOD"] == "POST")
	{
		include "config.php";
		
		$rating= $_POST["Rating"];
		$name = $_POST["name"];
		$bname = $_POST["Branch"];
		$cname = $_POST["Cname"];
		
		
			$sql = "INSERT INTO `rating`VALUES('$name','$cname','$bname','$rating')";
			$result1 = mysqli_query($link,$sql);
				if($result1)
				{
					echo "yes!!!";
				}
				else {
					echo "no..";
				}
			/*	
				
			$sqli = "SELECT * FROM music";
			
			$result2 = mysqli_query($link,$sqli);
			while($myrow = mysqli_num_rows($result2)){

				$count = $count + 1;
				$total = $total + $myrow["rating"];
				
			}
				$avg = $total / $count;
					echo $avg;

				if($result2)
				{
					echo "yes2!!!";
				}
				else {
					echo "no..2";
				}
*/
		
	}


?>
<html>
<head>
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
	<title> song rating</title>
	
	<style>
	th {
  background-color: #33FFE6;
  color: white
  padding: 15px 15px;
		text-align: center;
  font-size :30px ;
}

.button {
  padding: 8px 12px;
  font-size: 15px;
  text-align: center;
  cursor: pointer;
  outline: none;
  color: #fff;
  background-color: #36e77a;
  border: none;
  border-radius: 15px;
  
}

.button:hover {background-color: #1280e7}

.button:active {
  background-color: #3b022a;
  box-shadow: 0 5px rgb(230, 92, 92);
  transform: translateY(4px);
}
.button span {
  cursor: pointer;
  display: inline-block;
  position: relative;
  transition: 0.5s;
}

.button span:after {
  content: '\00bb';
  position: absolute;
  opacity: 0;
  top: 0;
  right: -20px;
  transition: 0.5s;
}

.button:hover span {
  padding-right: 25px;
}

.button:hover span:after {
  opacity: 1;
  right: 0;
}
table, th, td {
  border: 1px solid black;
  color: #1280e7;
  background-color: #a0f0e6;
  height: 45px;
  width: 40%;
  
}
body { 
  background: url('bgimg4.jpg') no-repeat center center fixed; 
  -webkit-background-size: cover;
  -moz-background-size: cover;
  -o-background-size: cover;
  background-size: cover;
}

    
		.topnav {
              overflow: hidden;
              background-color: #333;
            }
            
            .topnav a {
              float: left;
              color: 'blue';
              text-align: center;
              padding: 10px 18px;
              text-decoration: none;
              font-size: 20px;
            }
            
            .topnav a:hover {
              background-color: #FFD433;
              color: black;
            }
            
            .topnav a.active {
              background-color: #FFD433;
              color: white;
			  .container {
				position: relative;
				font-family: Arial;
			}
            table.center {
                margin-left: auto; 
                margin-right: auto;
            }
           
		</style>
		
		</head>
		<body>
    <div class="topnav" style="background-attachment: fixed;" opacity : 1>
                

               
    <a href="index.html">About</a>
                <a href="coding.html">Coding Skills</a>
                <a href="hobbies.html">Hobbies</a>
                <a href="achivement.html">Achivements</a>
                <a href="contact.html">Contact</a>
                <a href="chat.html">Chat Area</a>
                <a class="active" href="#home">Rating</a>
               

    </div>
			
		<form action="rating.php" method="POST">
            <br/>  <br/>  <br/>  <br/>  <br/>  <br/>
            <br/>  <br/>  <br/>   <br/>  <br/>
            <table style=" text-align: center; border:1px solid black;margin-left:auto;margin-right:auto; color = 'grey' ">


	    <tr>
            <td >NAME :</td>
            <td><input style="width: 300px; color: #097733; background-color: #b3c0be;" type="text" name="name" ></td>
	    </tr>
        <tr>
            <td>COLLAGE NAME : </td>
            <td> <input style="width: 300px; color: #097733;  background-color: #b3c0be;" type="text" name="Cname" ></td>
        </tr>
        <tr>
            <td>BRANCH</td>
            <TD>
                <select name="Branch"  style="width: 300px;  color: #097733;  background-color: #b3c0be;" >
                <option>---Branch---</option>
    
                <option value="CE" >CE</option>
                <option value="CH">CH</option>
                <option value="CL">CL</option>
                <option value="EC">EC</option>
                <option value="IC">IC</option>
                <option value="IT">IT</option>
                <option value="MH">MH</option>
   

    
                </select>
            </TD>
        </tr>

       
      
    <tr>
       <td>RATING :</td>
		<td>
		
		<select name="Rating" style="width: 300px;  color: #097733;  background-color: #b3c0be;" >
		<option >---Rating---</option>

        <option value="1" >1</option>
        <option value="2">2</option>
        <option value="3">3</option>
        <option value="4">4</option>
        <option value="5">5</option>

        </select>
        </td>
    </tr>
		
    <TR>
		<td></td>
			<td><center><button class="button" type="submit"  name="submit"/> Submit</center>
		</td>
	</tr>
	</table>
	</form>
					
					</div>
		</body>
	</html>
            
    
