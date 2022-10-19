#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num1,g;
    scanf("%d",&num1);
    if (num1>=0)
    {   g= printf("%d",num1);
        printf("%d",g);}
    if (num1<0)
    {   g = printf("%d",num1);
        printf("%d",g);}
    return 0;
}