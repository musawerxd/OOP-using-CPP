#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double base, height, area;
	cout << "Enter Base of a Triangle: ";
	cin >> base;
	cout << "Enter Height of a Triangle: ";
	cin >> height;
	area = 0.5 * base * height;
	cout << "Area of a Triangle: " << fixed << setprecision(2) << area;
	return 0;
}
