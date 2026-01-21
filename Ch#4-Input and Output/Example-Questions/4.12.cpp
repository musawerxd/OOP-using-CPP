#include <iostream>
using namespace std;
int main()
{
	int divd, divs, q, r;
	cout << "Enter Dividend and Divisor:  ";
	cin >> divd >> divs;
	q = divd / divs;
	r = divd % divs;
	cout << "Quotient: " << q << endl;
	cout << "Remainder: " << r;
	return 0;
}
