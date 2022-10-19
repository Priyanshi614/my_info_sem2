#include<iostream>
int x = 1;
namespace nspace
{
	int x = 2;
	int y= 3;
	int z= 4;	
}
int main() {
	using namespace nspace;

	
	int y=5;
	int fun();
	fun();
	
	std::cout <<z;
}
void fun() {
	std::cout << z;
}
