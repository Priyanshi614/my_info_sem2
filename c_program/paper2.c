#include<stdio.h>
int main() {
	int num,i,j,count=0;
	scanf("%d",&num);
	for (i=2;i<=num;i++)
	{
		if (num%i==0)
		{ 
			for (j=1;j<=i;j++)
			{
				if (i%j==0)
				count++;
				if (count>2)
				break;
				
			}
		
		}
		if (count ==2)
		{
			printf("%d ",i);	
		}
		count=0;

			
	}
	return 0;
	
}
