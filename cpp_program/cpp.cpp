#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int line, shift;
	string str;
	cin >> line >> shift;
	for(int i=0;i<line;i++)
	{
		cin >> str;
		for(int j=0;str[j] != '\0';j++)
		{
			if(str[j] >='A' && str[j] <='Z' )
			{
				str[j] = (str[j] - 'A'+ shift) %26 +'A';
			}
			else if(str[j] >='a' && str[j] <='z' )
			{
				str[j] = (str[j] - 'a'+ shift) %26 +'a';
			}
			else	if(str[j]>='0' && str[j] <='9' )
			{
				str[j] = (str[j] - '0'+ shift) %10 +'0';
			}
		}
		cout <<str <<"\n";
	}
	return 0;
}
