#include<iostream>
#include<string>
using namespace std;
string fun(str)
{
    if(str == " " || str.length() == 1)
        return true;
    else 
    {
        if(str[0] == str.length()-1)
        {
            fun(str.substring(1,str.length()-2));
        }
    }
    else 
        return false;
}

int main{
    string num, result;
    cin >> num;
    result = fun(num);
    return 0;
}