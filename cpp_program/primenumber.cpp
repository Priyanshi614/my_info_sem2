#include<stdio.h>
int main() {
	int num,i,d=0;
	scanf("%d %d %d %d",&num);
	for (i=1;i<=num;i++)
	{
		if (num%i == 0)
		{
			d++;
			if (d>2)
			{
				break;
			}
		}
	}
	if (d==2)
	{
		printf("%d is prime number",num);
	}
	else
	{
		printf("%d is ",num);
	}
}
