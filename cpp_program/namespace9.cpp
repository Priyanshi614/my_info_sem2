#include<iostream>
using namespace std;
int &fun() {
    int &num_ref = *(new int(7));
    cout << num_ref << " " << &num_ref << endl;
    return num_ref;
}
int main() {
    int &ref = fun();
    cout << ref << " " << &ref << endl;
    delete &ref; 
    //ref is a dangling reference from here on
    //using ref will result in undefined behaviour
    cout << ref << " " << &ref << endl;
    return 0;
}
