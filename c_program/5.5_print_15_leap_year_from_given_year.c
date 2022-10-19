#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int year,num,num2=2104;
    scanf("%d",&year);
    int num1= year+4-(year%4);
    if(year%400==0)
    {
        printf("%d",year);
        for(num=4;num<60;num=num+4)
        {
            printf(" %d",year+num);
        }
    }
    else
        if(year%100==0)
        {
            printf("%d",num1);
            for(num=4;num<60;num=num+4)
            {
                printf(" %d",num1+num);
            }
        }
    else
        if(year%4==0)
        {
            printf("%d",year);
            for(num=4;num<60;num=num+4)
            {
                printf(" %d",year+num);
            }
            
        }
      
    else
        if(year>2096 && year<2104)
        {
        printf("%d",num2);
        for(num=4;num<60;num=num+4)
            {
                printf(" %d",num2+num);
            }
        
        }
    else

        
        {
            printf("%d",num1);
            for(num=4;num<60;num=num+4)
            {
                printf(" %d",num1+num);
            }
        }
    
        
    return 0;
}
