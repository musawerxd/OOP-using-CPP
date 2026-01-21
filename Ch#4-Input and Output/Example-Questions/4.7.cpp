#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double x = 15.674, y = 235.73, z = 9525.9864;
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);
	cout << setprecision(2) << "setprecision(2)" << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "z: " << z << endl;
	cout << endl
		 << setprecision(3) << "setprecision(3)" << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "z: " << z << endl;
	cout << endl
		 << setprecision(4) << "setprecision(4)" << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "z: " << z << endl;
	cout << endl
		 << setprecision(3) << x << "  ";
	cout << setprecision(3) << y << "  " << setprecision(3) << z;
	return 0;
}
