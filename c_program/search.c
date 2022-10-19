#include<stdio.h>
int main() {
	int i,num;
	int arr[10] = {20,2,3,10,50,60,70,570,40,11};
	scanf("%d",&num);
	for(i=0;i<10;i++)
	{
		if(num == arr[i])
		{
			printf("%d",i+1);
			num=0;	
		}
			
	}
	if(num != 0)
	{
		printf("NOT FOUND");
	}
	
}
	
