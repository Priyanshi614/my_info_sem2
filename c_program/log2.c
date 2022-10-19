#include<stdio.h>
#include<math.h>
int main() {
	int p,num;
	scanf("%d",&num);
	p = log10(num);
	printf("%d %d",num,p+1);
	return 0;
}
