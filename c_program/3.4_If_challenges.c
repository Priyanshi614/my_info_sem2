#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num1,x;
    scanf("%d",&num1);
    x= printf("%d",num1);
    
    if (num1>=0 && x%2!=0)
        printf("%d",x);
    if (num1<0 && x%2!=0)
        printf("%d",x);
    return 0;
}
