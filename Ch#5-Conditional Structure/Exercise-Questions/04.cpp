#include <iostream>
using namespace std;
int main()
{
	double side, base, ht, area;
	char op;
	cout << "Enter Your Choice (S for Square and T for Triangle):  ";
	cin >> op;
	if (op == 'S' || op == 's')
	{
		cout << "Enter Side: ";
		cin >> side;
		area = side * side;
		cout << "Area of a Square is:  " << area;
	}
	else if (op == 'T' || op == 't')
	{
		cout << "Enter Base: ";
		cin >> base;
		cout << "Enter Height: ";
		cin >> ht;
		area = base * ht * 0.5;
		cout << "Area of a Triangle:  " << area;
	}
	else
		cout << "Invalid Choice.";
	return 0;
}
