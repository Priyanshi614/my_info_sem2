#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define length 10000

int main() 
{
    char str[length],sub_str[length];
    int i,j,count,occurrence=0,len1,len2;
    
    scanf("%[^\n]",sub_str);
    scanf(" %[^\n]",str);
    
    
    len1 = strlen(str);
    len2 = strlen(sub_str);
    
    for(i=0; i<=len1-len2; i++)
    {
        count=1;
     
            for(j=0; j<len2; j++)
            {
                if(str[i+j] != sub_str[j])
                {
                    count=0;
                    break;
                }
                
            }
        
        if(count == 1)
        {
            occurrence++; 
        }
        
    }
    printf("%d",occurrence);
    
        
    return 0;
}