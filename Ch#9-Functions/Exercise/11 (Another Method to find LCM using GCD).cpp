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
	long a, b, LCM;
	cout<<"Enter Two Integers:  ";
	cin>>a>>b;
	LCM = (a*b)/GCD(a,b);
	cout<<"Least Common Multiplier of ("<<a<<","<<b<<") is:  "<<LCM;
	return 0;
}
