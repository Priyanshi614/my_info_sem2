#include<stdio.h>
#include<string.h>
struct student
{
	char name[10];
	float cpi;
	int total;
}
s1,s2;
int main() {
	s1.cpi = 9.2;
	s1.total = 450;
	strcpy(s1.name,"abc");
	s2.cpi = 9.8;
	s2.total = 460;
	strcpy(s2.name,"xyz");
	
	printf("%d %f %s \n",s1.total,s1.cpi,s1.name);
	printf("%d %f %s \n",s2.total,s2.cpi,s2.name);
}
