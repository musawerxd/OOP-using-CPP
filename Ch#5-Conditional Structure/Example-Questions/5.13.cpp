#include <iostream>
using namespace std;
int main()
{
	int units;
	float bill;
	cout << "Enter Units Consumed: ";
	cin >> units;
	if (units > 500)
		bill = units * 7;
	else if (units > 300)
		bill = units * 5;
	else
		bill = units * 2;
	bill = bill + 150;
	if (bill > 2000)
		bill = bill + (bill * 5.0 / 100.0);
	cout << "Total Bill: " << bill;
	return 0;
}
