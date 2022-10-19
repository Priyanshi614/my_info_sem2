#include<stdio.h>
#include<string.h>
int main() {
	char num1[50]= "C_programming ";
	char num2[50] = "I like that !";
	char num3[100] = "123456789123456789";
	
	strcpy(num3,num1);
	//strcat(num3,num2);
	
	printf("%s",num3);
	return 0;
}
