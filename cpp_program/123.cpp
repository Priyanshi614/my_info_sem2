#include<iostream>
using namespace std;
int main() {
	int i = 8;
	int j = 8;
	for(i=0;i<8; i++)
	{
		for(j = 0; j< 8;j++)
		{
			if(i<4)
			{ 
				if(i>=j )
				{
					cout << "*";
				}
				if(i<j && i+j <=6)
				{
					cout << " ";
				}
				if( j+i >=7)
				{
					cout << "*";
				}
				
			}
			
			
			if(i>=4)
			{
				if(i>j && i+j<=7)
					cout << "*";
				else if(i<=j)
					cout <<"*";
				else if(i+j>7 && i+j<14)
					cout << " ";
				
			}
				
						
		}
		cout << endl;
				
	}
}
