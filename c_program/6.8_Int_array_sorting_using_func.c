#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,a,number[5];
    //scanf("%d",&n);
    //printf("%d\n",n);
    
    for(i=0;i<5;i++)
        scanf("%d",number[i]);
    
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(number[i]>number[j])
            {
                a=number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    for(i=0;i<5;i++)
        printf("%d ",number[i]);
    return 0;
}
