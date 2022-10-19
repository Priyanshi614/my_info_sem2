#include<iostream>
using namespace std;

int main() {
	int num,remainder = 0,n=0;
	cin >>num;
	while(num!=0)
	{
		n = num%10;
		num = num/10;
		if(n == 0)
		{
			continue;
		}
		cout << n;
	}

}
