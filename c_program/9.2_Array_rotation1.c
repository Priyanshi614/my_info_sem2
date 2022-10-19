#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void rotate_array(char str[], int number_of_chars_to_rotate)
{
	// Write code here to rotate characters in the array by number_of_chars_to_rotate
	// Use array traversing method
	// Do not use array indexation method or pointer offset method.
    int i;
    for(i = 22-number_of_chars_to_rotate;i<22;i++)
    {
        printf("%c",str[i]);
    }
    for(i=0;i<22-number_of_chars_to_rotate;i++)
    {
        printf("%c",str[i]);
    }
}

int main()
{
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num;
    char str[22];
    //char sent;
    scanf("%[^\n]",str);
    scanf("%d",&num);
    rotate_array(str,num);
    return 0;
}