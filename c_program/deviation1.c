#include<stdio.h>
#define size 6
int main()
{
	int i,sum=0,count=0;
	int arr[size] ={1 ,2 ,3 ,4 ,5 ,6};
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	count = sum/size;
	for (i=0;i<size;i++)
	{
		printf("%d ",count-arr[i]);
	}

}
