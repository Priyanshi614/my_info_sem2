#include<stdio.h>
int main() {
	char num;
	int priya = 56;
	num = getchar();
	putchar(num);
	
	num = getchar();
	if (num==EOF)
	{
		printf("%d",priya);
	}
	else
	{
		putchar(num);
	}
}
