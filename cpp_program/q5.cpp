// Result will be different if compiled with
// -fno-elide-constructors flag
#include<iostream>
using std::cout;
using std::endl;
class Test {
    int i;
public:
    Test(const Test &t) {
        this->i = t.i * 2;
    }
    Test(int i = 0) {
        this->i = i;
    }
    void print() {
        cout << i << endl;
    }
};
int main() {
    Test t0;
    t0.print();
    Test t1 = Test(3);
    t1.print();
    return 0;
}
