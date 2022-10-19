#include <iostream>

using namespace std;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,remainder,num=0;
    cin >> n;
    while(n != 0)
    {
        remainder = n%10;
        num= num*10 + remainder;
        n /=10;
    }
    cout << num;
    
    
    
    return 0;
}
