#include<stdio.h>
int main() {
	char num1,num2,num3,num4,num5;
	scanf("%c%c%c%c%c",&num1,&num2,&num3,&num4,&num5);

	
	num1=num1-32;
	
	num2 = num2 - 97;
	num2 = num2 + 65;
	
	num3= num3 - 97;
	num3= num3 + 65;
	
	num4 = num4- 97;
	num4 = num4 + 65;
	
	num5= num5 - 97;
	num5 = num5 + 65;
	printf("%c%c%c%c%c",num1,num2,num3,num4,num5);
	}
