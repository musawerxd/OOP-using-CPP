#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	long x, res, sum = 1;
	cout << "Enter Value of x: ";
	cin >> x;
	for (int i = 1; i <= 4; i++)
	{
		res = (i + 1) * pow(x, i);
		sum = sum + res;
	}
	cout << "\nSum of the Series is: " << sum;
	return 0;
}
