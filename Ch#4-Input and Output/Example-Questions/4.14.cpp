#include <iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter 2 integers respectively:  ";
	cin>>a>>b;
	cout<<"\nThe original value in a="<<a<<" and b="<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"The Swapped Value in a="<<a<<" and b="<<b;
	return 0;
}
