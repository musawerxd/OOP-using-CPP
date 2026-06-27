#include <iostream>
using namespace std;
void Large(long &a, long &b)
{
	if(a>b)
		a=a*a;
	else
		b=b*b;
}
long Sum(long num)
{
	long rem;
	int s=0;
	while(num!=0)
	{
		rem=num%10;
		s=s+rem;
		num/=10;
	}
	return s;
}

int main()
{
	long a, b;
	cout<<"Enter Two Numbers:  ";
	cin>>a>>b;
	cout<<"\nSum of Individual Digits of "<<a<<":  "<<Sum(a)<<endl;
	cout<<"Sum of Individual Digits of "<<b<<":  "<<Sum(b)<<endl;
	cout<<"\nSquare of Large Number is: ";
	if(a>b)
	{
		Large(a,b);
		cout<<a;
	}
	else
	{
		Large(a,b);
		cout<<b;
	}
	return 0;
}
