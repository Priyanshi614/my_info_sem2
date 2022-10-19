#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 50

void rotate_array(char str[], int even_index_rotations, int odd_index_rotations)
{
    int length,i,j,count=0;
    length=strlen(str);
    char even_str[15],odd_str[15],answer[50];
    for(i=0,j=0;i<length;i++,j++)
    {
        even_str[j]=str[2*i];
    }
    int length_of_even_str;
    if(length%2==0)
        length_of_even_str=length/2;
    else
        length_of_even_str=(length/2)+1;
     while(1)
    {
        if(even_index_rotations>length_of_even_str)
        {    even_index_rotations-=length_of_even_str;
            continue;
        }
        break;
    }
    int k1=length_of_even_str-(even_index_rotations);
    if(even_index_rotations==0)
    {
        for(i=0,j=0;i<length_of_even_str;i++,j++)
            answer[2*j]=even_str[i];
    }
    else
    {   int even_index=0;
        while(count<length_of_even_str)
       {   
         count++;
         answer[2*even_index]=even_str[k1];
         even_index++;
         k1++;
         if(k1==length_of_even_str)
         k1=0;
      }
    }
    int length_of_odd_str;
        length_of_odd_str=length/2;
    
     while(1)
    {
        if(odd_index_rotations>length_of_odd_str)
        {    odd_index_rotations-=length_of_odd_str;
            continue;
        }
        break;
    }
    if(length%2==0)
    for(i=0,j=0;i<length/2;i++,j++)
    {
        odd_str[j]=str[(2*i)+1];
    }
    else
    for(i=0,j=0;i<=length/2;i++,j++)
    {
        odd_str[j]=str[(2*i)+1];
    }
    int k2=length_of_odd_str-(odd_index_rotations);
    if(odd_index_rotations==0)
    {
        for(i=0,j=0;i<length_of_odd_str;i++,j++)
            answer[2*j+1]=odd_str[i]; }
    else
    {   int odd_index=0,count=0;
        while(count<length_of_odd_str)
       {   
         count++;
         answer[(2*odd_index)+1]=odd_str[k2];
         odd_index++;
         k2++;
         if(k2==length_of_odd_str)
         k2=0;
      }
    }
    printf("%s",answer);
    
}

int main() {
    char str[SIZE];
    scanf("%[^\n]",str);
    int even_rotate,odd_rotate;
    scanf("\n%d %d",&even_rotate,&odd_rotate);
    rotate_array(str,even_rotate,odd_rotate);
    return 0;
}
