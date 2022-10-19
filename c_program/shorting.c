#include<stdio.h>
int main() {
	int i,j,temp,arr[5];
	//scanf("%d\t",&num);
	int arr5;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-1;j++)
		{
			if(arr[j+1]<arr[j])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}	
	
}
