#include<stdio.h>

float f2()
{
	printf("\nin side F2");
	return 5.5;
}
int f1() 
{
	printf("\nin side F1");
	f2();
	printf("\nabcd");
	return 2;
}

int main() 
{
	int x;
	x = f1();
	printf("\n%d",x);
	printf("\npqrst");
	
	return 0;
}
