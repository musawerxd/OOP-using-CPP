#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	float p, r, a;
	p = 1000;
	r = 0.05;
	cout.setf(ios::fixed, ios::floatfield);
	cout << setprecision(2);
	for (int y = 1; y <= 10; y++)
	{
		a = p * pow(1 + r, y);
		cout << "Amount at the End of the Year " << y << " is:  " << a << endl;
	}
	return 0;
}
