#include <iostream>
using namespace std;
int main()
{
	double theta, r, area;
	cout << "Enter Length of Radii and Angle in Radians between them: ";
	cin >> r >> theta;
	area = (r * r * theta) / 2.0;
	cout << "The Area of Sector is: " << area;
	return 0;
}
