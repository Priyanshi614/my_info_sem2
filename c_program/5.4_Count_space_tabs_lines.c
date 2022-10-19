#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int spaces=0,tabs=0,newline=0;
    char input;
    input = getchar();
    while (EOF != input)
    {
        if (input == 32)
        {
            spaces++;
        }
        if (input == 9)
        {
            tabs++;
        }
        if (input == 10)
        {
            newline++;
        }

        input = getchar();        
    }
    printf("%d %d %d",spaces,tabs,newline);
    return 0;
}