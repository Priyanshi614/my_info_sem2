#include<iostream>

inline int cube(int n)
{
	return n * n * n;
}

int main()
{
	//float ans1 = cube(3);
	//float ans2 = cube(3.1 + 1);
	std::cout << cube(3) << std::endl;
	std::cout << cube(3.1 + 1) << std::endl;
	return 0;
}
