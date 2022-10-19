#include <iostream>


/* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
using std::cout;
using std::cin;
using std::endl;
class Complex{
    int re,im;
    public:
    Complex(int re = 0,int im = 0)
    {
        this->re = re;
        this->im = im;
    }
    void print() {
        cout <<re << " "<<im;
    }
    Complex operator+(Complex&c)
    {
        return Complex(this->re +c.re,this->im+ c.im);
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int re,im;
    cin >>re >>im;
    Complex c1(re,im),c2(1,1),c3;
    c3 = c1.operator+(c2);
    c3.print();
    
    return 0;
}
