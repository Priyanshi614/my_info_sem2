#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void print_char_line(char ch, int no)
{
    int i;
    for(i=0;i<no;i++)
    {
        printf("%c\t",ch);
       // printf("%d\t",ch);
    }
}
void print_ascii_line(char ch, int no)
{
     int i;
    for(i=0;i<no;i++)
    {
        //printf("%c\t",ch);
        printf("%d\t",ch);
    }
}


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char ch;
    int no,i;
    ch = getchar();
    scanf("\t%d",&no);
    
    if (ch>='a'  &&ch<='z')
    {
        for(i=ch;i<123;i++)
        {
            print_char_line(i,no); 
            printf("\n");
            print_ascii_line(i,no);
            //ch++;
            printf("\n");   
        }
        
    }else {
        for(i=ch;i<91;i++)
        {
            print_char_line(i,no); 
            printf("\n");
            print_ascii_line(i,no);
            //ch++;
            printf("\n");   
        }
        
    }
        
    

    
   
    
    return 0;
}
