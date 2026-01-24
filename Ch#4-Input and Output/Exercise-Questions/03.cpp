#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a, b, c;
	cout << "Enter Three Sides of Triangle: ";
	cin >> a >> b >> c;
	double s = (a + b + c) / 2.0;
	double area = sqrt(s * (s - a) * (s - b) * (s - c));
	cout << "Area of Triangle is: " << area;
	return 0;
}
