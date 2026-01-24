#include <iostream>
using namespace std;
int main()
{
	long double mile, kilo;
	cout << "Enter Miles: ";
	cin >> mile;
	kilo = 1.609 * mile;
	cout << mile << " Miles is Equal to " << kilo << " Kilometers.";
	return 0;
}
