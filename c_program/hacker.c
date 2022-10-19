#include<stdio.h>
int main() {
	int x,y;
	printf("%d",(x=5,y=2,x==5));
	printf(" %d %d",x,y);
	return 0;
}
