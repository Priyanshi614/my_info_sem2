#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int count = 0;
class  SimpleArray
{
    int * p1;
    int n;
public:
    
    SimpleArray(int n)
    {
        this->n = n;
        p1 = new int[n];
        for(int i =0;i<n;i++)
        {
            cin >> p1[i];
        }
    }
    void print()
    {
        for (int i =0 ;i< n;i++)
        {
            cout << p1[i]<< " ";
        }
        cout << "\n";
    }
    ~SimpleArray()
    {
        ::count++;
        if(::count>1)
        {
            cout << "destructor called\n";
            delete p1;
        }
    }
    friend SimpleArray operator+(SimpleArray &c1,SimpleArray &c2);
     
   
    
};
SimpleArray operator+(SimpleArray &c1,SimpleArray &c2)
{
    if(c1.n == c2.n) //if length of both arrays are same...
    {
        for(int i = 0;i<c1.n;i++)
        {
            c1.p1[i] = c1.p1[i]+c2.p1[i];
        }
    }
    return c1;
}




int main() {
    int n1, n2;
   // SimpleArray result;
    cin >> n1;
    SimpleArray simple_array_1(n1);
    cin >> n2;
    SimpleArray simple_array_2(n2);
    
    
        simple_array_1 + simple_array_2;
    
    
  
    
         simple_array_1.print();
    
  
    
    return 0;
}
