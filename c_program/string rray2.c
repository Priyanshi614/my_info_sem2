#include<stdio.h>
int main() {
	char name[5];
	//scanf("%[^\n]",name);
	scanf("%[^ ]",name);
	//scanf("%s",name);
	printf("%s",&name);
	//printf("\n%c %d",name[0],name[0]);
	
	//gets(name);
	//printf("%s",name);
	return 0;
}
