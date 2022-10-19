#include<iostream>
using namespace std;

int main() {
	int num,remainder = 0,n=0;
	cin >>num;
	while(num != 0)
	{
		remainder = num%10;
		
		n= n*10 + remainder;
		num = num/10;
		
	}
	cout << n;
}
