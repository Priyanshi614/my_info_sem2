#include<iostream>
using namespace std;
int x = 10; 
namespace nspace
{
        int x = 20; 
        void fun()
        {
                //int x = 30; 
                cout << x << " " << nspace::x << " " << ::x << endl;
        }
}
int main()
{
        nspace::fun();
        return 0;
}
