#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double n1 = 132.364, n2 = 26.91, r;
	r = n1 / n2;
	cout << r << endl
		 << endl;
	cout << setprecision(5) << r << endl;
	cout << setprecision(4) << r << endl;
	cout << setprecision(3) << r << endl;
	cout << setprecision(2) << r << endl;
	cout << setprecision(1) << r;
	return 0;
}
