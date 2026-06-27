#include <iostream>
using namespace std;
inline double MAX(double a, double b)
{
	return a>b ? a:b;
}

int main()
{
	double a,b;
	cout<<"Enter Two Floating Point Values:  ";
	cin>>a>>b;
	cout<<"Maximum Value is:  "<<MAX(a,b);
	return 0;
}
