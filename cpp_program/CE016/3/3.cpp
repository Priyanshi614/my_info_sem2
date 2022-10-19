#include <iostream>
using namespace std;
float circle(float r)
{
    return 3.14*r*r;
}
float rectangle (float l, float h){
    return l*h;
}
float square (float length)
{
    return length*length;
}
int main() {
    char shape[10];
    float length,l,h,r;
    std::cin >> shape;
    //cout << shape;
    if(shape[0] == 'c')
    {
        cin >>  r;
        cout << circle(r);
    }
    else if(shape[0] == 'r')
    {
        cin >>  l >> h;
        cout << rectangle(l,h);
    }
    else
    {
        cin >>  length;
        cout << square(length);
        
    }

    return 0;
}
