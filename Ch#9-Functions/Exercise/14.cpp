#include <iostream>
using namespace std;
long Fun(long num)
{
	if(num%2==0)
		return 1;
	else
		return 0;
}

int main()
{
	long num;
	for(int i=1; i<=5; i++)
	{
		cout<<"Enter a Number: ";
		cin>>num;
		if(Fun(num)==1)
			cout<<num<<" is a Even Number."<<endl;
		else
			cout<<num<<" is a Odd Number."<<endl;
	}
	return 0;
}
