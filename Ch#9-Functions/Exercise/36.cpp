#include <iostream>
#include <iomanip>
using namespace std;
inline double Area(double r)
{
	return 3.14*r*r;
}

int main()
{
	double rad;
	cout<<"Enter Radius: ";
	cin>>rad;
	cout<<"Area of the Circle: "<<fixed<<setprecision(3)<<Area(rad);
	return 0;
}
