#include <iostream>

void swap(int &no1, int &no2)
{
  	no1 = no1 +no2;
    no2 = no1 -no2;
    no1 = no1-no2;
    
}

int main() {
	int num1, num2;
  	std::cin >> num1 >> num2;
  	swap(num1, num2);
  	std::cout << num1 << " " <<  num2;
    return 0;
}
