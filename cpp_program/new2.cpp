#include<stdio.h>
int main() {
	int i,arr[10],avg;
	int sum=0,count =0;
	for(i=0;i<10 ;i++)
	{
		scanf("%d",&arr[i]);
		if (arr[i] != -1)
		{
			count++;
			sum= sum+arr[i];
				
		}
		else break;
	}
	avg = sum/count;
	printf("%d",avg);
	
	return 0;
	
}
