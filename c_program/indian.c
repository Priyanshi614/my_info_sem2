#include<stdio.h>
int main() {
	int t,num,num1=0,num2=0,num3=0,i,j;
	char ch[10];
	
	scanf("%d",&t);
	for( i=0;i<t;i++)
	{
		scanf("%d\n",&num);
		scanf("%s\n",ch);
		for(j=0;j<num;j++)
		{
			if(ch[j]=='Y')
				num1++;
			if(ch[j] == 'I')
				num2++;
			if(ch[j]== 'N')
				num3++;
			
		}
		if(num1>0)
			{
				printf("NOT INDIAN");
			}
			else if(num2>0)
			{
				printf("INDIAN");
				
			}
			else
				printf("NOT SURE");
			num1=0,num2=0,num3=0	;
	}
	
	
}
