#include <iostream>
using namespace std;
int main()
{
	double cel, faren;
	cout << "Enter Temperature in Farenheit: ";
	cin >> faren;
	cel = 5.0 / 9.0 * (faren - 32);
	cout << "Temperature in Celcius is: " << cel;
	return 0;
}
