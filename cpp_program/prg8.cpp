#include<iostream>
int x = 1;
namespace nspace
{
       // int x = 2;
        int y = 3;
}
int main()
{
        int y = 4;
        using namespace nspace;
        //error: reference to ‘x’ is ambiguous
		std::cout << x;
        std::cout << " " << y;
	int fun();
	fun();
        return 0;
}
void fun()
{
	std::cout << x;
}
