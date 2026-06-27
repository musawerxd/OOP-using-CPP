#include <iostream>
#include <math.h>
using namespace std;
long fac(int i);
double Cal(long x)
{
	double sum=x;
	for(int i=2; i<=16; i++)
	{
		if(i%2==0)
			sum-=pow(x,i)/fac(i);
		else
			sum+=pow(x,i)/fac(i);
	}
	return sum;
}
long fac(int i)
{
	long f=1;
	for(int n=i; n>=1; n--)
		f*=n;
	return f;
}

int main()
{
	long x;
	cout<<"Enter an Integer: ";
	cin>>x;
	cout<<"Sum of Series is: "<<Cal(x);
	return 0;
}
