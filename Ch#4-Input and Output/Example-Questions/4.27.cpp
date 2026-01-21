#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float e1, e2, p1, p2, g1, g2;
	cout << "Enter Current Electricity Rate: ";
	cin >> e1;
	cout << "Enter Current Petrol Rate: ";
	cin >> p1;
	cout << "Enter Current Gas Rate: ";
	cin >> g1;
	e2 = e1 * 1.1;
	p2 = p1 * 1.1;
	g2 = g1 * 1.1;
	cout << "\nNew Electricity Rate: " << fixed << setprecision(2) << e2 << endl;
	cout << "New Petrol Rate: " << fixed << setprecision(2) << p2 << endl;
	cout << "New Gas Rate: " << fixed << setprecision(2) << g2;
	return 0;
}
