#include<stdio.h>
int main() {
	char p;
	p = getchar();
	if (isupper(p))
	{
		putchar(tolower(p));
	}
	else
	{
		putchar(toupper(p));
	}
}
