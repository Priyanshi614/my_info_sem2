#include<iostream>
using namespace std;
int main() {
	int year;
	cin>>year;
	if(year>2096 && year<2104)
	{
		cout<<2104<<" ";
		for(int i=4; i<60;i=i+4)
		{
			cout<<2104+i<<" ";
		}
	}
	else if(year%400 ==0)
	{
		cout<<year<<" ";
		for(int i=4; i<60;i=i+4)
		{
			cout<<year+i<<" ";
		}
	}
	
	else if(year%100 ==0)
	{
		cout<<year+4-(year%4)<<" ";
		for(int i=4; i<60;i=i+4)
		{
			cout<<year+4-(year%4)+i<<" ";
		}
	}
	else if(year%4 ==0)
	{
		cout<<year<<" ";
		for(int i=4; i<60;i=i+4)
		{
			cout<<year+i<<" ";
		}
	}
	else
	{
		cout<<year+4 - (year%4)<<" ";
		for(int i=4; i<60;i=i+4)
		{
			cout<<year+4-(year%4)+i<<" ";
		}
	}
	
	
	
}
