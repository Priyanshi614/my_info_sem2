#include<stdio.h>
int main() {
	int i,n=0,sum,j;
	int arr[100];
	do
	{
		i=0;
		scanf("%d ",&arr[i]);
		n = n+arr[i];
		i++;
	}
	while (arr[i-1] != -1);
	
	sum=(n-1)/(i-1);
	//printf("%d",sum);
	for(j=0;j<5;j++)
	{
		printf("%d",sum-arr[i]);
	}
	
}
