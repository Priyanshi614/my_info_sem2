#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char current_char;
    int is_first_character_of_word = 1;
    char first_character_of_word;
    int is_dot = 0;
    while(1)
    {
        current_char = getchar();
        if(current_char == EOF)
            break;
        if(is_first_character_of_word )
        {
            is_first_character_of_word  = 0;
            first_character_of_word = current_char;
            
        }
        //first_character_of_word = current_char;
    
         else if (' ' == current_char || '\n' == current_char)
         {
            is_first_character_of_word = 1;
            putchar(first_character_of_word);
            printf("ly");
            if(is_dot)
            {
                printf(".");
                is_dot = 0;
            }
            putchar(current_char);
         }
        else if('.' == current_char)
            is_dot = 1;
        else
            putchar(current_char);
    }
    putchar(first_character_of_word);
    printf("ly");
    if(is_dot)
        printf(".");
    
    return 0;
}
