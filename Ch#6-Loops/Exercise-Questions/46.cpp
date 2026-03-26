/*Problem:-   Write a program to generate the following pyramid of digits using nested loop:
						 1
						232
					   34543
					  4567654
					 567898765
					67890109876
				   7890123210987
				  890123454321098
				 90123456765432109
				0123456789876543210			*/

#include <iostream>
using namespace std;
int main()
{
	int a, b, d, c1 = 0, c2 = 0;
	for (a = 1; a <= 10; ++a)
	{
		for (b = 1; b <= 10 - a; ++b)
		{
			cout << " ";
			++c1;
		}
		for (d = 0; d != 2 * a - 1; ++d)
		{
			int sum = 0;
			if (c1 <= 10 - 1)
			{
				if (a + d > 9)
				{
					sum = (a + d) - 10;
					cout << sum;
				}
				else
					cout << a + d;
				++c1;
			}
			else
			{
				++c2;
				sum = 0;
				if (a + d - 2 * c2 > 9)
				{
					sum = (a + d - 2 * c2) - 10;
					cout << sum;
				}
				else
					cout << a + d - 2 * c2;
			}
		}
		cout << endl;
		c1 = c2 = 0;
	}
	return 0;
}
