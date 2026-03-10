#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long x, n, sum;
	cout << "Enter Value of x: ";
	cin >> x;
	cout << "Enter Value of n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		sum = sum + pow(x, i);
	cout << "Sum of the Series is: " << sum;
	return 0;
}
