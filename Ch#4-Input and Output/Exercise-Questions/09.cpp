#include <iostream>
using namespace std;
int main()
{
	float dis, lit;
	cout << "Enter Petrol in Liters: ";
	cin >> lit;
	dis = lit * 5.3;
	cout << "Car can cover " << dis << " miles in " << lit << " liters.";
	return 0;
}
