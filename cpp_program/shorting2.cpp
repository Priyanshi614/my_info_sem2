#include<stdio.h>
int main() {
	int i,j,num,temp;
	scanf("%d\t",&num);
	int arr[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(arr[j]<arr[i])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}	
	
}
