#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << setw(10) << "Number" << setw(10) << "Square" << setw(10) << "Cube" << endl;
	cout << setw(8) << 1 << setw(10) << 1 * 1 << setw(10) << 1 * 1 * 1 << endl;
	cout << setw(8) << 2 << setw(10) << 2 * 2 << setw(10) << 2 * 2 * 2 << endl;
	cout << setw(8) << 3 << setw(10) << 3 * 3 << setw(10) << 3 * 3 * 3 << endl;
	cout << setw(8) << 4 << setw(10) << 4 * 4 << setw(10) << 4 * 4 * 4 << endl;
	cout << setw(8) << 5 << setw(10) << 5 * 5 << setw(10) << 5 * 5 * 5;
	return 0;
}
