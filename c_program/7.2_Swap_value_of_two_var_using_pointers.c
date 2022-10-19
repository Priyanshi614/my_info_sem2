#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  	int x , y,a;
  	int *xp = &x, *yp = &y;
    scanf("%d %d", xp, yp);
  
  	/*  
    	Do not remove any character from given code and add your code here.
    	Swap values of x and y variables without using variable names x and y.
        You can only use xp and yp variables.
    
    */
    //a=x;
    //x = y;
    //y= a;
    a = *xp;
    x = *yp;
    y = a;
    
    
    
 
    
  
  	printf("%d %d", x, y);
    return 0;
}