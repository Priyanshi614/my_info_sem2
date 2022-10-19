#include<stdio.h>
int main() {
	int num =1;
	while (num<=5)
	{
		
		if (num==1)
		{
			printf("*\n");
		}
		else
			if (num==2)
			{
				printf("**\n");
			}
			else 
			if (num==3)
			{
				printf("***\n");
			}
			else
			if (num==4)
			{
				printf("****\n");
			}
			else
			if (num==5)
			{
				printf("*****\n");
			}
		num=num+1;
	}
}
	
