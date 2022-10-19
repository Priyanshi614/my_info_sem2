#include<iostream>
#include<iomanip>
#include<cstdio>

using std::cin;
using std::cout;
using std::endl;
class   ComplexNumber
{
    float real,imaginary;
public:
   ComplexNumber(double real = 0,double imaginary = 0)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void print(){
        printf("%.2f %.2f",real,imaginary);
    }
   friend ComplexNumber operator+(ComplexNumber &c1,ComplexNumber &c2);
   friend ComplexNumber operator*(ComplexNumber &c1,ComplexNumber &c2);
   friend ComplexNumber operator*(ComplexNumber &c1,float n);

   
    
};
ComplexNumber operator+(ComplexNumber &c1,ComplexNumber &c2)
{
    ComplexNumber result1;
    result1.real = c1.real+c2.real;
    result1.imaginary = c1.imaginary + c2.imaginary;
    return result1;
    
}
ComplexNumber operator*(ComplexNumber &c1,ComplexNumber &c2)
{
    ComplexNumber result1;
    // (a + bi)*(c + di) = ((a*c) -(b*d)) + i ((a*d) + (b*c))
    result1.real = (c1.real*c2.real)- (c1.imaginary * c2.imaginary);
    result1.imaginary =(c1.real*c2.imaginary)+ (c1.imaginary * c2.real);
    return result1;
    
}
ComplexNumber operator*(ComplexNumber &c1,float n)

{
    ComplexNumber result1;
    result1.real = c1.real*n;
    result1.imaginary = c1.imaginary*n;
    return result1;
    
}
/* Write your code here */

int main() {
    
    float real, imaginary;
    cin >> real >> imaginary;
    ComplexNumber result(real, imaginary);
    
    int n, i;
    cin >> n;
    
    int operation_code;
    float operand2_float;
    for(i = 0; i < n; i++) {
        cin >> operation_code;
        if(1 == operation_code) { // addition of two ComplexNumber objects
            cin >> real >> imaginary;
            ComplexNumber operand2_complex_number(real, imaginary);
            result = result + operand2_complex_number;
        } else if(2 == operation_code) { // multiplication of two ComplexNumber objects
            cin >> real >> imaginary;
            ComplexNumber operand2_complex_number(real, imaginary);
            result = result * operand2_complex_number;
        } else if(3 == operation_code) { // multiplication of ComplexNumber object and a float
            cin >> operand2_float;
            result = result * operand2_float;
        } else {
            cout << "Invalid operation" << endl;
        }
        result.print();
        cout << endl;
    }
    
    return 0;
}
