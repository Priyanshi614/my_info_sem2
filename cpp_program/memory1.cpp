#include<iostream>
using namespace std;
int *fun() {
    int *num_ptr = new int(7);
    cout << *num_ptr << " " << num_ptr << endl;
    return num_ptr;
}
int main() {
    int *ptr = fun();
    cout << *ptr << " " << ptr << endl;
    delete ptr; 
    //ptr is a dangling pointer from here on
    //using ptr will result in undefined behaviour
    cout << *ptr << " " << ptr << endl;
    return 0;
}
