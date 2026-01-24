#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double p, r, t, i, am;
	cout << "Enter Principal Amount, Rate and Time: ";
	cin >> p >> r >> t;
	am = p * pow((1.0 + r / 100), t);
	i = am - p;
	cout << "The Compound Interest Amount:  Rs. " << i;
	return 0;
}
