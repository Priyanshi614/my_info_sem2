#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num1,num3,num4;
    scanf("%d",&num1);
    
    for (num3=0;num3<num1;num3++)
    {
        for(num4=0;num4<num3+1;num4++)
        {
            printf("*");
        }
        printf("\n");
        
            
    }
    
    return 0;