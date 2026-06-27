#include <iostream>
using namespace std;
unsigned GCD(unsigned a, unsigned b)
{
	if(b==0)
		return a;
	else
		return GCD(b, a%b);
}

int main()
{
	unsigned a,b;
	cout<<"Enter Two Integers:  ";
	cin>>a>>b;
	cout<<"GCD of ("<<a<<","<<b<<") is:  "<<GCD(a,b);
	return 0;
}
