#include<stdio.h>
#define num 10
int main() {
	int i;
	float arr[num],p,sum=0;
	for (i=0;i<num;i++)
	{
		scanf("%f",&arr[i]);
		p= arr[i]*arr[i];
		sum=sum+p;
		
	}
	printf("%f",sum);
	
}
