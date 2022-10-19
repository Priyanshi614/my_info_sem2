#include<iostream>
using namespace std;
int main() {
	char arr1[4] = "234";
	char arr2[5] = "rama";
	cout <<arr1;
	cout <<arr2;
	char * const p1 = arr1;
	p1[0]='5';
//	p1[0]= 5;
	cout <<p1;
	char const*p2 = arr2;
	
}
