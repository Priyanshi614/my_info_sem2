#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Product{
    string name;
    float price;
    public:
        Product (string x, float y);
        void print();
        Product(const Product &p)
        {
            name = p.name;
            price = (p.price);
        }
};
Product::Product(string x,float y)
{
    name = x;
    price = 2 *y;
    
    
}
void Product::print()
{
    cout<< name;
    cout << " ";
    printf("%.2f",price);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string name;
    float price;
    cin >> name;
    cin >> price;
    Product P = Product(name,price);
    P.print();
    return 0;
}

