#include<stdio.h>
#define num 3
int main() {
	int marks[num],i,sum=0,avg;
	for(i=0;i<num;i++)
	{
		scanf("%d ",&marks[i]);
		sum=sum+marks[i];
	}
	avg = sum/num;
	for(i=0;i<num;i++)
	{
		printf("%d ",marks[i]-avg);	
	}
	
}
