#include<stdio.h>
int process()
{
	static int x=1;
	if(!(x%7))
		return 0;
	x=x+2;
	printf("%d ",x);
	return x;
}
int main() {
	int i;
	for(i=0;i<5;i++)
		process();
}
