#include<stdio.h>
int rec(int a, int b,int num);
int main() {
	int n,x,first = 0,second = 1;
	scanf("%d",&n);
	x = rec(first,second, n);
	printf("%d",x);
	
	return 0;
}
int rec(int a,int b,int num)
{
	int y,count=0;
	count++;
	if(count ==num);
	return y;
	//int total = a+b;
	y=a + rec( b, a+b , num);
}
