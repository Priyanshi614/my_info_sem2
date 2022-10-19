#include<iostream>
#include<windows.h>
using namespace std;
int main() {
	system("color 5E");
	int i,ans = 1;
	for(i = 0;i<5;i++)
	{
		for(int k=0;k<=5-i;k++)
			cout << " ";
		
			
		for(int j=0;j<=i;j++)
		{	
			if(j==0 ||i==0)
				ans = 1;
			else 
				ans = ans*(i-j+1)/j;
			cout << ans << " ";
		}
			cout << endl;
    	
	}	
	
	return 0;
}
