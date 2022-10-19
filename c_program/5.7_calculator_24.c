#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int no1,no2,no3;
    scanf("%d",&no1);
    scanf("%d",&no2);
    scanf("%d",&no3);
    if (no3==1)
    {
        printf("%d",no1+no2);
    }
    else
        if (no3==2)
        {
            printf("%d",no1-no2);
        }
    else
         if (no3==3)
        {
            printf("%d",no1*no2);
        }
     else
         if (no3==4)
         {
             printf("%f",(float)no1/no2);
         }
    
    return 0;
}
