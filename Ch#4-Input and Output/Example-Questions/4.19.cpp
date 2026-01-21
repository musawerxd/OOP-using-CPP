#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int inch_height;
	float cent_height;
	cout<<"Enter Height in inches: ";
	cin>>inch_height;
	cent_height=inch_height*2.54;
	cout<<"Your Height in Centimeters: "<<fixed<<setprecision(2)<<cent_height;
	return 0;
}
