// Write a program that explains the difference of postfix increment operator and prefix increment operator used as part of a larger expression.

#include <iostream>
using namespace std;
int main()
{
	int a, b, x, y;
	a = b = x = y = 0;
	b = a++;
	y = ++x;
	cout << "a: " << a << endl
		 << "b: " << b << endl;
	cout << "x: " << x << endl
		 << "y: " << y << endl;
	return 0;
}
