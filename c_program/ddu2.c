#include<stdio.h>
int main() {
	int m,n,p;
	scanf("%d\n",&m);
	scanf("%d",&n);
	p= (m%n==0)?(printf("%d",m/n)):(printf("0"));
	return 0;
}
