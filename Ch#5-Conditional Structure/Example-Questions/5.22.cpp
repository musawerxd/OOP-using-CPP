#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter Three Digits: ";
	cin >> a >> b >> c;
	if (a != b && b != c && c != a)
	{
		cout << a << b << c << "\t";
		cout << a << c << b << "\t";
		cout << c << b << a << "\t";
		cout << b << a << c << "\t";
		cout << c << a << b;
	}
	else
	{
		if (a == b && a == c)
		{
			cout << a << b << c;
		}
		else
		{
			if (a == b)
			{
				cout << a << b << c << "\t";
				cout << a << c << b << "\t";
				cout << c << a << b;
			}
			else
			{
				if (a == c)
				{
					cout << a << b << c << "\t";
					cout << b << a << c << "\t";
					cout << a << c << b;
				}
				else
				{
					cout << a << b << c << "\t";
					cout << b << a << c << "\t";
					cout << b << c << a;
				}
			}
		}
	}
	return 0;
}
