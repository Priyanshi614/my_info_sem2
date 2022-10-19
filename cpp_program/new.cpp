#include<stdio.h>
int main() {
	int i;
	char arr[25] = "c_programming";
	for(i=0;i<13;i++)
	{
		printf("%*.*s\n",i+1,i+1,arr);
	}
}
