#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int year;
    scanf("%d",&year);
    if (year%400==0)
    {
        printf("yes");
        
    }
    else
        if (year%100==0)
        {
            printf("no");
        }
        else 
            if (year%4==0)
            {
        
            printf("yes");
            }
         
            else
            {
                printf("no");
            }
    
    return 0;
}