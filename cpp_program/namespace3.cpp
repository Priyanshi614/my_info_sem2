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
using namespace nspace;
int main()
{
	fun();
	nspace::fun();
	cout << x << endl;
	cout << nspace::x << endl;
	return 0;
}
