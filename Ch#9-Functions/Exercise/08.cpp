#include <iostream>
using namespace std;
long EQ(long a, long b, long c, long d)
{
	if(a*a*a + b*b*b + c*c*c == d*d*d)
		return 0;
	else
		return -1;
}

int main()
{
	long a, b, c, d;
	cout<<"Enter Four Integers:  ";
	cin>>a>>b>>c>>d;
	int s = EQ(a,b,c,d);
	if(s==0)
		cout<<"\nThe Equation is Satisfied.";
	else
		cout<<"\nThe Equation is not Satisfied.";
	return 0;
}
