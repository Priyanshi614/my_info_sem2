#include<stdio.h>
#include<string.h>
int main() {
	int rslt;
	char sub1[50] = "aBCd";
	char sub2[50] = "zxCd";
	strncat(sub1,sub2,2);
	printf("%s",sub1);
	return 0;
}
