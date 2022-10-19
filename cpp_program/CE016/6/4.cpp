#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str1;  // main string
    string str2;    //sub string
    int num;
    getline(cin,str1);
    cin >> num;
    cin >> str2;
    string s = str1;
    for(int i =0;i<num ;i++)
    {
        s.append(str1);
    }
    //cout <<s;
    for(int i = 0;i< s.length();i++)
    {
        if(s.substr(i,str2.length() )== str2)
           cout << i <<" ";
    }
    
    return 0;
}
