#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 50


void rotate_array(char str[], long int number_of_chars_to_rotate)
{
    int length,count=1;
    length=strlen(str);
    
    while(1)
    {
        if(number_of_chars_to_rotate>length)
        {    number_of_chars_to_rotate-=length;
            continue;
        }
        break;
    }
    int i=length-(number_of_chars_to_rotate);
    if(number_of_chars_to_rotate==0 || number_of_chars_to_rotate==length)
        printf("%s",str);
    else
    { 
        while(count<=length)
       {   
         count++;
         printf("%c",str[i]);
         i++;
         if(i==length)
         i=0;
     }
    }
}

int main()
{
    char str[SIZE];
    scanf("%[^\n]",str);
    long int numbers_to_rotate;
    scanf("%ld",&numbers_to_rotate);
    rotate_array(str,numbers_to_rotate);
     
    return 0;
}