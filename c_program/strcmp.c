#include<stdio.h>
#include<string.h>
int stringcompare(char sub1[], char sub2[])
{
	int i =0;
	do
	{
		i++;
		if(islower(sub1[i]));
			sub1[i]=sub1[i] -32;
		if(sub1[i]!=sub2[i])
			return (sub1[i]-sub2[i]);
    }
	while(sub1[i]);	
	
}
int main() {
	int rslt;
	char sub1[] = "abc";
	char sub2[] = "ABC";
	
	if(!stringcompare(sub1,sub2))
		printf("same");
	else
		printf("difrent");
	
	return 0;
}

