#include <iostream>

int &find_smaller(int &no1,int &no2)
{
  	if(no1 >no2)
      return no2;
    else
        return no1;
}

int main() {
  	
  	int num1, num2;
	std::cin >> num1 >> num2;
  	
  	find_smaller(num1, num2) *= 2;
  	
  	if(num1 > num2)
      	std::cout << num1;
  	else
      	std::cout << num2;
  
    return 0;
}
