#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int y;
    y = n/5||n/7?printf("%d",n):printf("%d",0);
    return 0 ;
}    
    