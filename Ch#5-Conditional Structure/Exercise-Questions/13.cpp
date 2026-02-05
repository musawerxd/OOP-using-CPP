#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long a, b, c, d, e;
	double f, x1, x2;
	cout << "Enter Value of a, b and c:  ";
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	e = 2 * a;
	if (a == 0)
		cout << "Not a Quadratic Equation. A cannot be Zero.";
	else if (d < 0)
		cout << "Sorry the Roots are not Real.";
	else
	{
		f = pow(d, 0.5);
		x1 = (-b + f) / e;
		x2 = (-b - f) / e;
		cout << "The Roots of Equation are:  " << x1 << " , " << x2;
	}
	return 0;
}
