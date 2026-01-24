#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float area, cir, rad;
	cout << "Enter Radius: ";
	cin >> rad;
	area = 4.0 * 3.14 * rad * rad;
	cir = (4.0 / 3.0) * 3.14 * rad * rad * rad;
	cout << "Area is: " << setprecision(5) << area << endl;
	cout << "Circumstance is: " << setprecision(5) << cir;
	return 0;
}
