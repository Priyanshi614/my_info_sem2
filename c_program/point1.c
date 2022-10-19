#include<stdio.h>
int main() {
	char *p,*p1;
	char s1[] = "hello";
	p = &s1[2];
	p1 = &s1[3];
	printf("%p\n%p",p,p1);
}
