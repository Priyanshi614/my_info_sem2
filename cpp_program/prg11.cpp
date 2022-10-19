#include<iostream>
int sum(int n1, int n2, int n3 = 3, int n4 = 4);
void fun()
{
	std::cout << "fun" << std::endl;
	std::cout << sum(1, 2, 3, 4) << std::endl;
	std::cout << sum(1, 2, 3) << std::endl;
	std::cout << sum(1, 2) << std::endl;
}
int main()
{
	int sum(int n1, int n2, int n3 = 111, int n4 = 222);
	std::cout << "main" << std::endl;
	std::cout << sum(1, 2, 3, 4) << std::endl;
	std::cout << sum(1, 2, 3) << std::endl;
	std::cout << sum(1, 2) << std::endl;
	fun();
	return 0;
}
int sum(int n1, int n2, int n3, int n4 ) // Error – You can not assign default values in definition and declaration
{ // if definition and declaratio
	return n1 + n2 + n3 + n4;
}
