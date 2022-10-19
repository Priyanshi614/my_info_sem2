#include<stdio.h>
#include<string.h>
int stringcompare(char sub1[], char sub2[])

{
	int i=-1;
	do
	{
		i++;
		printf("i = %d  ",i);
		printf("sub1 = %d ",sub1[i]);
		printf("sub2 = %d  \n",sub2[i]);
		if(sub1[i] != sub2[i])
		{
			if (sub2[i]>='A' && sub2[i]<='z' &&  sub1[i]>='A' && sub1[i]<='z')
			if (sub1[i]==sub2[i] +32 || sub2[i] ==sub1[i]+32)
			{
					(toupper(sub1[i]));
			        (toupper(sub2[i]));
			        continue;
			}
			//(toupper(sub1[i]));
			//(toupper(sub2[i]));
		
			
			return(sub1[i] - sub2[i] );
				
		}
			
			
		
		
			
	}
	while(sub1[i]);
	return 0;	
	
}
int main() {
	char sub1[6] = "Acd";
	char sub2[6] = "Acd";
	if(stringcompare(sub1,sub2))
		printf("diffrent");
	else
		printf("same");
	
	
}

