/*
  *
 ***
*****
*/
#include<stdio.h>
#include<conio.h>
int main() {
	//textcolor("4");
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if (i+j>=2 && j-i<3 && i-j<3 && i+j<7) {
				printf("*");
			}
			else
				printf(" ");
			
			/*if (j-i>2)
			{
				printf(" ");
			}*/
				
	    }
	
		printf("\n");
	}
}
