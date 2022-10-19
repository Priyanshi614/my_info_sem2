#include<stdio.h>
int main() {
	int i,j;
	for (i=0;(i%2==0 && i<7);i++)
	{
		for (j=0;(j<7 && j%2==0);j++)
		{
			if (i + j ==6)
			{
				printf("A");
			}
			else if (i + j ==8) 
			{
				printf("B");
			}
			else if (i +j ==10)
			{
				printf("C");
			}
			else if (i + j==12)
			{
				printf("D");
			}  
		}
		printf("\n");
	}
	return 0;
	
}
