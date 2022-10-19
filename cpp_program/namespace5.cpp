#include<iostream>
int x = 1;
namespace nspace
{
        int x = 2;
        int y = 3;
}
int main()
{
        int y = 4;
	 //error: ‘y’ is already declared in this scope
        //using nspace::y;
        using nspace::x;
        std::cout << x << " " << y;
        std ::cout <<nspace::y;
	int fun();
	fun();
        return 0;
}
int fun()
{
	std::cout << x;
}

