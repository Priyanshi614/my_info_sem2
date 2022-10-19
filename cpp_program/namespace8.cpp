#include<iostream>
int x = 1;
namespace nspace
{
    int x = 2;
    int y = 3;
    int z = 4;
}
using namespace nspace;
int main()
{
    int y = 5;
    //error: reference to ‘x’ is ambiguous
    //std::cout << " " << x;
    std::cout << " " << ::x;
    std::cout << " " << y;
    std::cout << " " << ::y;
    std::cout << " " << z;
    std::cout << " " << ::z;
    int fun();
    fun();
    return 0;
}
void fun()
{
    //error: reference to ‘x’ is ambiguous
    //std::cout << " " <<  x;
}
