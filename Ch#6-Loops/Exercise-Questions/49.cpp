/*Problem:-   Write a program to display the following:
			  1 2 3 4 5 6 7 6 5 4 3 2 1
			  1 2 3 4 5 6   6 5 4 3 2 1
			  1 2 3 4 5       5 4 3 2 1
			  1 2 3 4           4 3 2 1
			  1 2 3               3 2 1
			  1 2                   2 1
			  1                       1			*/

#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	for (a = 7; a >= 1; a--)
	{
		// Printing the First Half Triangle with Spaces:
		for (b = 1; b <= 7; b++)
		{
			if (b <= a)
				cout << b << " ";
			else
				cout << "  ";
		}
		for (c = 6; c > a; c--)
			cout << "  ";
		// Printing the Next Half Triangle:
		d = a;
		if (d == 7)
		{
			d--;
			while (d > 0)
			{
				cout << d << " ";
				d--;
			}
		}
		else if (d < 7)
		{
			while (d > 0)
			{
				cout << d << " ";
				d--;
			}
		}
		cout << endl;
	}
	return 0;
}
