#include<stdio.h>
int main() {
	char num;
	num = getchar();
	while (num != ' ')
	{
		putchar(num);
		num = getchar();
	}
	printf("\n%c",num);
}
