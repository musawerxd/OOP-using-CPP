#include <iostream>
using namespace std;
double Small(double a, double b, double c)
{
	if((a<b) && (a<c))
		return a;
	else if((b<a) && (b<c))
		return b;
	else
		return c;
}

int main()
{
	double a, b, c, s;
	cout<<"Enter Three Floating Numbers:  ";
	cin>>a>>b>>c;
	cout<<"The Smallest of the Three is:  "<<Small(a,b,c);
	return 0;
}
