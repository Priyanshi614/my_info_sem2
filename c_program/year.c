#include<stdio.h>
int main() {
	int year,num=4;
	scanf("%d",&year);
	int num1=year%4;
	int num2=4-num1;
	int num3=year+num2;
	if (year%400==0)
		
	{
		while (num<=60)
		{
			printf("%d",year+num);
			num=num+4;
			printf("\n");
		}
		
		
	}
	else 
	if (year%100==0)
	{
		
		while (num<=60)
		{
			printf("%d",num3+num);
			num=num+4;
			printf("\n");
		}
		
    }
		else
		if (num%4==0)
		{
			while (num<=60)
			{
				printf("%d",year+num);
				num=num+4;
				printf("\n");
			}
			
			
		}
		else
			{
	
				
				while(num<=60)
				{
					printf("%d",num3+num);
					num=num+4;
					printf("\n");
				}
				
			}
		
		
		
	}
	
