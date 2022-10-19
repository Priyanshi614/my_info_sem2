#include<stdio.h>
#define size 25
int main() {
	int i,j;
	char num[size] = "C_programming";
	for (i=0;i<=13;i++)
	{
		printf("%*.*s\n",-1,i+1,num);
    }
	
	for(j=12;j>=0;j--)
	{
		printf("%*.*s\n",1,j,num);
	}
		
	
	
	
	
}
