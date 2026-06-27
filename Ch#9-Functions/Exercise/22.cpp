#include <iostream>
using namespace std;
int Digit(long num)
{
	int r=0;
	for(int i=num; i!=0; i/=10)
		r++;
	return r;
}

int main()
{
	long num;
	int d;
	cout<<"Enter an Integer: ";
	cin>>num;
	d=Digit(num);
	cout<<"The Number ("<<num<<") contains "<<d<<" Digits.";
	return 0;
}
