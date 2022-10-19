#include <iostream>
using namespace std;
float volume(float l) // cube
{
    float volume;
    volume = l*l*l;
    return volume;
}
float volume(float h,float l,float w) //cuboid
{
    float volume;
    volume = l*h*w;
    return volume;
}

int main() {
  	char shape[10];
    double d1, d2, d3;
  	
  	std::cin >> shape;
  	if('e' == shape[3])
    {
      	std::cin >> d1;
      	std::cout << volume(d1);
    }
  	else
    {
      	std::cin >> d1 >> d2 >> d3;
      	std::cout << volume(d1, d2, d3);
    }
  
    return 0;
}
