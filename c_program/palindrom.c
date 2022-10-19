#include<stdio.h>
int main() 
{
	int i,n,count=0;
	scanf("%d ",&n);
	char arr[n];
	scanf("%s",arr);
	for(i=0;i<=n;i++)
	{
		if (arr[i] ==arr[n-i])
			count++;
	}
	if (count==n-1)
		printf("PELINDROM");
	else
		printf("NO");
}
