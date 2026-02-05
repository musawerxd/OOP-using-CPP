#include <iostream>
using namespace std;
int main()
{
	char ch;
	double val;
	cout << "\tEnter Conversion Type: " << endl;
	cout << "C for Centimeters from Inches" << endl;
	cout << "L for Liters from Gallon" << endl;
	cout << "K for Kilometers from Mile" << endl;
	cout << "G for Kilograms from Pound" << endl;
	cin >> ch;
	cout << "Enter a Value: ";
	cin >> val;
	switch (ch)
	{
	case 'C':
	case 'c':
		cout << val << " Inches in Centimeters is:  " << val * 2.54;
		break;
	case 'L':
	case 'l':
		cout << val << " Gallon in Liters is:  " << val * 3.785;
		break;
	case 'K':
	case 'k':
		cout << val << " Mile in Kilometers is:  " << val * 1.609;
		break;
	case 'G':
	case 'g':
		cout << val << " Pound in Kilograms is:  " << val * 0.4536;
		break;
	default:
		cout << "Invalid Conversion Type!";
	}
	return 0;
}
