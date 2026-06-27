#include <iostream>
using namespace std;
long Power(long base, long exp)
{
	long res=1;
	for(int i=1; i<=exp; i++)
		res*=base;
	return res;
}

int main()
{
	int a, b, res=0;
	cout<<"Enter Base and Exponent:  ";
	cin>>a>>b;
	res=Power(a,b);
	cout<<a<<" Raised to Power "<<b<<" is:  "<<res;
	return 0;
}
