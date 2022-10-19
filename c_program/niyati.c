#include<stdio.h>
int main()

{
    int num1,num2,i,j,mnum1,mnum2;
    scanf("%d %d",&num1,&num2);
    
    if(num1 >= num2 )
    {
       for(i= 1; i<=num2;i++)
    	{
	        for(j = 1;j<=num1;j++)
	        {
	          mnum1=num1*i;
	          
	          mnum2=num2*j;
	          if(mnum1 == mnum2)
	          {
	          	
	          	
	              printf("%d ",mnum2);
	              return 0;
	          }
	        }
   		} 
	}
	else{
	
    {
       for(i= 1; i<=num1;i++)
    	{
	        for(j = 1;j<=num2;j++)
	        {
	          mnum1=num2*i;
	          
	          mnum2=num1*j;
	          if(mnum1 == mnum2)
	          {
	              printf("%d ",mnum2);
	              return 0;
	          }
	        }
   		} 
	}
	}
    
    
    
    
    return 0;
}

