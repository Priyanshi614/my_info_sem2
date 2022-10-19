#include<stdio.h>
void print(int [],int);
int main() {
	int i;
	int x[5];
	//int y[3];
	scan(x,5);
	//scan(y,3); 
	print(x,5);
	//print(y,3);
	             //x is equal to &x[0]

	return 0;
	
}
void scan(int read[],int size)
{
	int i = 0;
	for(;i<size;i++)
	{
		scanf("%d ",&read[i]);
		//read[i]++;
	}
}
void print(int data[],int size)
{
	int i = 0;
	for(;i<size;i++)
	{
		printf("%d ",data[i]);
		//data[i]++;
	}
}
