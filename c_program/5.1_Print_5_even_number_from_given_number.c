#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num;
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("%d %d %d %d %d",num,num+2,num+4,num+6,num+8);
    }
    else
    {
        printf("%d %d %d %d %d",num+1,num+3,num+5,num+7,num+9);
    }
    return 0;
}