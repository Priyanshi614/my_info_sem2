#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num,r;
    
    scanf("%d",&num);
    r = num%30;
    if (r>15)
    {
        printf("%d",num+30-r);
    }
    else
        printf("%d",num-r);
    return 0;
}
