#include<stdio.h>
#define size 32 
int main() {
	int i,j;
	char num[size] = "ABCDEFGHIJKLMNOP";
	for (i=0,j=0;i<size;i++)
	{
		if (i>=16)
			j++;
		printf("%*.*s\n",1,(i+1)-2*j,num);
    }
	
}
