#include<stdio.h>
#define num 5
int main() {
	int marks[num],i,group1=0,group2=0,group3=0,group4=0,group5=0,group6=0;
	for (i=0;i<num;i++)
	{
		scanf("%d",&marks[i]);
		if (marks[i]>=0 && marks[i]<=9)
		{
			
			group1++;
		}
		else
		if (marks[i]>=10 && marks[i]<=19)
			group2++;			
	    else
		if (marks[i]>=20 && marks[i]<=29)
			group3++;
		else
		if (marks[i]>=30 && marks[i]<=39)
			group4++;			
		else
		if (marks[i]>=40 && marks[i]<=49)
			group5++;			
		else
		if (marks[i]>=50 && marks[i]<=59)
			group6++;			
					
							
				
	}
	printf("%d %d %d %d %d %d",group1,group2,group3,group4,group5,group6);
	
}
