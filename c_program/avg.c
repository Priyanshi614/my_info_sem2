#include<stdio.h>
int main() {
	int marks[3] = {10,20,30},i,sum=0,avg,total;
	for(i=0;i<3;i++)
	{
		sum=sum+marks[i];
	}
	avg=sum/3;
	for(i=0;i<3;i++)
	{
		total=marks[i]-avg;
		printf("%d ",total);
	}
	
}
