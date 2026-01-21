#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n = 3928;
	double d = 91.5;
	char str[] = "OOP using C++";
	cout << "(" << setw(5) << n << ")" << endl;
	cout << "(" << setw(8) << d << ")" << endl;
	cout << "(" << setw(16) << str << ")";
	return 0;
}
