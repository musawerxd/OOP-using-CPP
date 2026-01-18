//Write a program that inputs the radius of a circle and displays the circumference by using formula 2?R. Store the value of ? in a constant by using the DEFINE directive.

#include <iostream>
#define PI 3.1415
using namespace std;
int main()
{
	       float radius, area;
	       cout<<"Enter Radius: ";
	       cin>>radius;
	       area = 2.0*PI*radius;
	       cout<<"Area: "<<area;
	       return 0;
}
