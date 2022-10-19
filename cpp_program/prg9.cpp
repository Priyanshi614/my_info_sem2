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
	int ans1 = sqr(3);
	int an2 = sqr(3.1 + 1);
	std::cout << ans1 << std::endl;
	std::cout << an2 << std::endl;
	return 0;
}
