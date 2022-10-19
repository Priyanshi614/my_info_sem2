#include<stdio.h>
#include<string.h>
int main() {
	
	char sub1[50] = "C programming";
	char sub2[50] = "C programmingpri";
    strcat( sub1,  sub2);
	printf("%s",sub1);
	return 0;
}
