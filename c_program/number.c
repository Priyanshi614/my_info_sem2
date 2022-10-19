#include<stdio.h>
int main() {
	int a,b,c;
	scanf("%d\n",&a);
	scanf("%d\n",&b);
	scanf("%d",&c);
	if (a==b && b==c && c==a )
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;

}
