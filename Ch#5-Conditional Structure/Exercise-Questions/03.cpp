#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter the Value of a , b and c:  ";
	cin >> a >> b >> c;
	if (a == 0)
		cout << "Divisor cannot be Zero.";
	else
	{
		if (b % a == 0 && c % a == 0)
			cout << a << " is a Common Divisor of " << b << " and " << c;
		else
			cout << a << " is not a Common Divisor of " << b << " and " << c;
	}
	return 0;
}
