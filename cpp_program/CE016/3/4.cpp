#include <iostream>
using namespace std;


int main() {
    
    int total,number,odd_occuring_num=0;
    cin >> total;
    
    for(int i=0;i<total;i++)
    {
        cin >> number;
        odd_occuring_num = odd_occuring_num ^ number; // compare with binary  num
    }
    
    cout << odd_occuring_num;
    return 0;
}
