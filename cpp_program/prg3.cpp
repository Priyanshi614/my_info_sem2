#include<iostream>
using namespace std;
namespace nspace
{
	int x = 11;
	void fun()
	{
		cout << "Hello!" << endl;
	}
}
int main()
{
	//fun(); // Invalid
	nspace::fun();
	//cout << x << endl; // Invalid
	cout << nspace::x << endl;
	return 0;
}
