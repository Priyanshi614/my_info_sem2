#include <iostream>
using namespace std;

int main() {
    unsigned long long num,count = 0;
    cin>> num;
    while(num != 1)
    {
        if(num % 2 ==0)
        {
            num = num/2;
            count++;
        }
        else if (num == 3 || num%4 ==1)
        {
            num -= 1;
            count++;
        }
        else
        {
            num+=1;
            count++;
        }
            
        
    }
    cout<< count;
    return 0;
}
