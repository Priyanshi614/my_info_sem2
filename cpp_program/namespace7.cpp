#include<iostream>

int i = 2;

int fun()
{
	i++;
	return i;
}

int main()
{
	int n = fun() + [fun() * fun()];
	std::cout << n << std::endl;
	return 0;
}
