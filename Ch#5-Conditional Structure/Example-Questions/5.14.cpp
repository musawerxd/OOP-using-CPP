#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	long double radius, area, circumference;
	int choice;
	cout << "Enetr Radius: ";
	cin >> radius;
	cout << "Enter 1 for Area & 2 for Circumference: ";
	cin >> choice;
	if (choice == 1)
	{
		area = 3.14 * radius * radius;
		cout << "Area of a Circle: " << fixed << setprecision(2) << area;
	}
	else if (choice == 2)
	{
		circumference = 2 * 3.14 * radius;
		cout << "Circumference of a Circle: " << fixed << setprecision(2) << circumference;
	}
	else
		cout << "Invalid Choice";
	return 0;
}
