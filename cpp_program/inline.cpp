#include<iostream>

inline int cube(int n)
{
return n * n * n;
}

int main()
{
float ans1 = cube(3);
float ans2 = cube(3.1 + 1);
std::cout << ans1 << std::endl;
std::cout << ans2 << std::endl;
return 0;
}
