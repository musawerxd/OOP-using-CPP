//Write a program that performs all compound assignment operations on an integer.

#include <iostream>
using namespace std;
int main()
{
		int a=10;
		cout<<"Value of a: "<<a<<endl<<endl;
		a+=5;
		cout<<"Value of a after a+=5: "<<a<<endl;
		a-=5;
		cout<<"Value of a after a-=5: "<<a<<endl;
		a*=2;
		cout<<"Value of a after a*=2: "<<a<<endl;
		a/=2;
		cout<<"Value of a after a/=2: "<<a<<endl;
		a%=2;
		cout<<"Value of a after a%=2: "<<a;
		return 0;
}
