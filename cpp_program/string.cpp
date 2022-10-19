#include<stdio.h>
#include<string.h>
void printstring(char nm[][10],int total);

int main() {
	char nmdata[3][10] = {"string1","string2","string3"};
	printstring(nmdata,3);
}
	
void printstring( char nm[][10],int total)
{
	int i;
	for(i=0;i<total;i++)
		printf("%c ",nm[i][10]);

}
