#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int days;
    scanf("%d",&days);
   printf("%d:%d:%d",days/360,days%360/30,days%360%30);
    //printf("priyanshi:");
    return 0;
}