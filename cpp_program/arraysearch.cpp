#include<stdio.h>
#define num 6
int main() {
	int i,arr[num],no1;
	scanf("%d",&no1);
	for (i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
		if (arr[i]==no1)
		{
			printf("%d",i);
			break;
			
		}
	}
	
}
