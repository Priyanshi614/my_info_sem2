#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long factorial(int);

int main()
{

    int n;
  	long fact;
  
  	scanf("%d", &n);
  	fact = factorial(n);
  	printf("%ld", fact);
  
    return 0;
}

long factorial(int num){
    int i;
    long total=1;
  	/* remove this comment and write your code here */
    if (num ==0 )
        return 1;
    
    
    for (i=1;i<=num;i++)
    {
        total= total*i;
        
    }
    return total;
    
}