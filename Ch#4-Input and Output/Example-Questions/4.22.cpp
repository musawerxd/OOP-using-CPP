#include <iostream>
using namespace std;
int main()
{
	int n, a, b;
	cout << "Enter 3-Digit Number: ";
	cin >> n;
	a = n / 100;
	n = n % 100;
	b = n / 10;
	n = n % 10;
	cout << "Numbers in Reverse Order: " << n << b << a;
	return 0;
}
