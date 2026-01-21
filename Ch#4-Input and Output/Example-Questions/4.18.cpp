#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double cel, faren;
	cout << "Enter Temperature in Celsius: ";
	cin >> cel;
	faren = 9.0 / 5.0 * cel + 32;
	cout << "Temperature in Fahrenheit: " << fixed << setprecision(2) << faren;
	return 0;
}
