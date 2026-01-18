//Write a program that explains the concept of overflow and underflow.

#include <iostream>
using namespace std;
int main()
{
	short var = 32767;
	cout<<var<<endl;
	var= var+1;
	cout<<var<<endl;
	var= var-1;
	cout<<var;
	return 0;
}
