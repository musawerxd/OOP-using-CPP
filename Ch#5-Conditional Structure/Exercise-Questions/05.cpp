#include <iostream>
using namespace std;
int main()
{
	double tem, cel, fah;
	char ch;
	cout << "Enter Temperature: ";
	cin >> tem;
	cout << "Enter Letter ('f' or 'F' for Fahrenheit Conversion and 'c' or 'C' for Celsius Conversion): ";
	cin >> ch;
	if (ch == 'f' || ch == 'F')
	{
		cout << endl
			 << "Your entered Temperature is in Fahrenheit." << endl;
		cel = 5.0 / 9.0 * (tem - 32);
		cout << "Your entered Temperature in Celsius is: " << cel;
	}
	else if (ch == 'c' || ch == 'C')
	{
		cout << endl
			 << "Your entered Temperature is in Celsius." << endl;
		fah = 9.0 / 5.0 * tem + 32;
		cout << "Your entered Temperature in Fahrenheit is: " << fah;
	}
	else
		cout << endl
			 << "Invalid Input";
	return 0;
}
