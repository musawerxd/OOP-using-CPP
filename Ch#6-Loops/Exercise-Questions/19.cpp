#include <iostream>
using namespace std;
int main()
{
	int c, fac, num, sum = 0;
	for (num = 1; num <= 5; num++)
	{
		fac = 1;
		for (c = 1; c <= num; c++)
		{
			fac = fac * c;
		}
		sum = sum + fac;
	}
	cout << "Sum of the Series is: " << sum;
	return 0;
}
