#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string str1,s;
    getline(cin,str1);
    int num,count = 0;
    cin >> num;
    string str2;
    cin >> str2;
    s= str1;
    for(int i =0;i <num;i++)
    {
       s.append(str1) ;
        
    }
    for(int i = 0;i<s.length();i++)
    {
        if(s.substr(i,str2.length())== str2)
            count++;
    
    }
    cout << count;
    //std::cout<< s;
    
    return 0;
}
