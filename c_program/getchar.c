#include<stdio.h>
int main() {
	char pe;
	int num=3,num1;
    pe = getchar();
	putchar(pe);
	
	pe = getchar();  
	printf("%c",pe);
	
	pe = getchar();
	printf("%c",pe);
	
	pe = getchar();
	if (pe !=97)
	{
	
		printf("%d",num);
	}
	else 
	{
		printf("%d",num-2);
	}
	pe = getchar();
	putchar(pe);
	printf("%c",pe);
	
	pe = getchar();
	
	if (EOF==pe)
	{
		printf("%d",num);
	}
	else
	{
		printf("%d",num*2);
	}
	
}
