#include<stdio.h>
#define SIZE 100
int main() {
	int sum =0,count = 0,i;
	float avg;
	int arr[SIZE];
	while (1)
	{
		scanf("%d ",&arr[count]);
		if (arr[count]== -1)
			break;
		
		sum = sum+arr[count];
		count++;
	}
	avg = (float)sum/count;
	for(i=0;i<count;i++)
	{
		printf("%f ",avg -arr[i]);
	}
	
}
