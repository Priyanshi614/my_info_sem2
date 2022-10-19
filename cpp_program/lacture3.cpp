#include<stdio.h>
void print(int [],int);
int main() {
	int i;
	int x[]={1,2,3,4,5};
	print(x,5);
	printf("\nin main:\n");
	for (i=0;i<5;i++)
		printf("%d",x[i]);
		
	return 0;
	
}
void print(int data[],int size)
{
	int i = 0;
	for(;i<size;i++)
	{
		printf("%d",data[i]);
		data[i]++;
	}
}
