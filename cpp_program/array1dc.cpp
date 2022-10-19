#include<stdio.h>
#define num1 3

int main() {
	int i,j,x[5],y[5];
	for (i=0;i<num1;i++)
	{
		
    	scanf("%d",&x[i]);
	
	}
	for (j=0;j<num1;j++)
	{
		
    	scanf("%d",&y[j]);
	
	}
	for (i=0;i<num1;i++)
	{
		printf("%d  ",x[i] + y[j]);
	}
	return 0;
}
