#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter Three Numbers: ";
	cin >> a >> b >> c;
	cout << "Old Values:" << endl;
	cout << "a = " << a << "\t b = " << b << "\t c = " << c << endl;
	int d = a + b + c;
	c = d - (b + c);
	a = d - (b + c);
	b = d - (a + c);
	cout << "\nNew Values:" << endl;
	cout << "a = " << a << "\t b = " << b << "\t c = " << c;
	return 0;
}
