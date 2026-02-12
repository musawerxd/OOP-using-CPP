#include <iostream>
using namespace std;
int main()
{
	char ch;
	double val;
	cout << "\tEnter Conversion Type: " << endl;
	cout << "I for Inches from Centimeters" << endl;
	cout << "G for Gallon from Liters" << endl;
	cout << "M for Mile from Kilometers" << endl;
	cout << "P for Pound form Kilograms" << endl;
	cin >> ch;
	cout << "Enter a Value: ";
	cin >> val;
	switch (ch)
	{
	case 'I':
	case 'i':
		cout << val << " Centimeters in Inches is:  " << val * 0.394;
		break;
	case 'G':
	case 'g':
		cout << val << " Liters in Gallon is:  " << val * 0.264;
		break;
	case 'M':
	case 'm':
		cout << val << " Kilometers in Miles is:  " << val * 0.622;
		break;
	case 'P':
	case 'p':
		cout << val << " Kilograms in Pounds is:  " << val * 2.2;
		break;
	default:
		cout << "Invalid Conversion Type!";
	}
	return 0;
}
