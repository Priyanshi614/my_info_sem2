#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num1,num2,num3,num4=-1;
    scanf("%d",&num1);
    for(num2=0;num2<num1;num2++)
    {
        for (num3=0; num3<num1 ;num3++)
        {
            if  (num3>=num2)
            {
                num4++;
                printf("%d",num4);
               
            }
            else
            {
                printf(" ");
            }
           
        }
        
        printf("\n");
        
    }
    return 0;
}