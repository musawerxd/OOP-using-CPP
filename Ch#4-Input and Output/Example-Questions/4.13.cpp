#include <iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter 1st Number: ";
	cin>>a;
	cout<<"Enter 2nd Number: ";
	cin>>b;
	cout<<"\nYou input Numbers as "<<a<<" and "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"The Values after Swapping are "<<a<<" and "<<b;
	return 0;
}
