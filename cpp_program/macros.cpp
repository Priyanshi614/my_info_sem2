#include<iostream>

#define SQUARE(x) (x) * (x)
int sqr(int x)
{
return x * x;
}
int main()
{
std::cout << SQUARE(3) << std::endl;
std::cout << SQUARE(3.1 + 1) << std::endl << std::endl;
std::cout << sqr(3) << std::endl;
std::cout << sqr(3.1 + 1) << std::endl;
return 0;
}
