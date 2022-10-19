#include<iostream>
#include<string>
#include<iomanip>
#define PI 3.14


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;


/* write your code here */

class Shape{
    public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Square:public Shape{
    double n1;
    public:
        Square(double n1){
            this->n1 = n1;
        }
        double area();
        double perimeter();
};
double Square::area(){
    return (n1*n1);
}
double Square::perimeter(){
    return (4 * n1);
}

class Rectangle:public Shape{
    double l;
    double w;
    public:
        Rectangle(double l, double w){
            this->l = l;
            this->w = w;
        }
        double area();
        double perimeter();
};
double Rectangle::area(){
    return (l*w);
}
double Rectangle::perimeter(){
    return (2 * (l+w));
}

class Circle:public Shape{
    double rad;
    public:
        Circle(double rad){
            this->rad = rad;
        }
        double area();
        double perimeter();
};
double Circle::area(){
    return (PI * rad *  rad);
}
double Circle::perimeter(){
    return (2 * PI * rad);
}


int main() {
    
    int n;
    cin >> n;

    Shape **sp = new Shape*[n];

    char shape_type;
    double num1, num2;
    for(int i = 0; i < n; i++) {
        getchar();
        cin >> shape_type;
        switch(shape_type) {
            case 'S':
                cin >> num1;
                sp[i] = new Square(num1);
                break;
            case 'R':
                cin >> num1 >> num2;
                sp[i] = new Rectangle(num1, num2);
                break;
            case 'C':
                cin >> num1;
                sp[i] = new Circle(num1);
                break;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << fixed << setprecision(2);
        cout << sp[i]->area() << " ";
        cout << sp[i]->perimeter() << endl;
    }

    return 0;
}



