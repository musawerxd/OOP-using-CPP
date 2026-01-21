#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double radius,area,cir;
	cout<<"Enter Radius: ";
	cin>>radius;
	area=radius*radius*3.14;
	cir=2*3.14*radius;
	cout<<"Area of a Circle: "<<fixed<<setprecision(2)<<area<<endl;
	cout<<"Circumference of a Circle: "<<fixed<<setprecision(2)<<cir<<endl;
	return 0;
}
