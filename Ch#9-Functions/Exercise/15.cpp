#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double Distance(long a1, long b1, long a2, long b2)
{
	double res = sqrt(pow((a2-a1),2) + pow((b2-b1),2));
	return res;
}

int main()
{
	long a1, a2, b1, b2;
	cout<<"Enter the Value of x1: ";
	cin>>a1;
	cout<<"Enter the Value of y1: ";
	cin>>b1;
	cout<<"Enter the Value of x2: ";
	cin>>a2;
	cout<<"Enter the Value of y2: ";
	cin>>b2;
	cout<<"Distance between Two Points: "<<fixed<<setprecision(3)<<Distance(a1,b1,a2,b2);
	return 0;
}
