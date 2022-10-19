#include <iostream>

using namespace std;
void func(long int n)
{
    long int number[35]; //here max given number is  999999999 , and binary num of it , have 32 digits.
    int i=0;
    while(n>0)
    {
        number[i]= n%2;
        n=n/2;
        i++;
    }
    
    for(int j=i-1; j >= 0; j--)
        cout << number[j];

    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int num;
    cin >> num;
    func(num);
    return 0;
}
