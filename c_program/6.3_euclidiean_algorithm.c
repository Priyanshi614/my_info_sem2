#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

unsigned long long int find_gcd(unsigned long long int,unsigned long long int);

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long long number1,number2;
    scanf("%llu %llu", &number1, &number2);
    printf("%llu",find_gcd(number1,number2));
    
    
    return 0;
}

unsigned long long int find_gcd(unsigned long long int number1,unsigned long long int number2)
{
    unsigned long long int min,max;
    if (number1>number2)
        min = number2,max = number1;
    else
        min = number1,max = number2;

    if(0==max%min)
        return min;
    else
        return find_gcd(min,max%min);
}
