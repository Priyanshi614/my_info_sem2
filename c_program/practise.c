#include<stdio.h>
void sum(int a,int b);
int main() {
	//int c;
    sum(2,10);
	return 0;
}
void sum(int a,int b)
{
	int c;
	c=a + b;
	printf("The Value of c is %d",c);
}
