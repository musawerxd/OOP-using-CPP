// Write a program that explains the difference between postfix increment operator and prefix increment operator used as an independent expression.

#include <iostream>
using namespace std;
int main()
{
	int a, b, x, y;
	a = b = x = y = 0;
	a++;
	b = a;
	cout << "a= " << a << endl
		 << "b= " << b << endl;
	x++;
	y = x;
	cout << "x= " << x << endl
		 << "y= " << y << endl;
	return 0;
}
