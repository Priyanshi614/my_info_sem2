#include<stdio.h>
void rec(int x)
{
	if(x==0)
		return;
		printf("%d ",x);
		rec(x-1);
		printf("%d ",x-1);
}
int main() {
	rec(4);
}
