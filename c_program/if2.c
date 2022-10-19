#include<stdio.h>
int main() {
	int num,p;
	scanf("%d",&num);
	if (num>=0)
	{
		p=	printf("%d",num);
		printf("%d",p);
	}
	else
	{
		p=printf("%d",num);
		printf("%d",p-1);
	}
}
			
		


