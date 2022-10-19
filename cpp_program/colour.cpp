#include<iostream>
#include<windows.h>
using namespace std;
int main() {
    system("color D7");
    
    for(int i=0;i<5;i++)
    {
    	for(int j =0 ;j<9;j++)
    	{
    		if(i+j>3 && i+j <9)
    			cout << "*";
    		else 
    			cout << " ";
		}
		cout << endl;
	}
    return 0;
}
