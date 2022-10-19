#include<stdio.h>
#define num1 5
int main() {
	float num[num1];
	int i;
	for(i=0;i<num1;i++)
	{
		scanf("%f ",&num[i]);
	}
	for (i=4;i>=0;i--)
	{
		printf("%f\n",num[i]);
	
    }
    return 0;

	
}
