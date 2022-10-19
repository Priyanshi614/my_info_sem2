#include<stdio.h>
#include<string.h>
int main() {
	int number = 10;
	char name1[12]="yanshipri ";
	char name2[16]="priyanshi";
	strncat(name1,name2,number);
	printf("%s",name1);
	return 0;
}
