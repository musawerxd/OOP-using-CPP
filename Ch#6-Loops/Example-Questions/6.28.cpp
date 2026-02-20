#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x, range, c;
	float sum = 0, num;
	cout << "Enter the Value of x: ";
	cin >> x;
	cout << "Enter the Range: ";
	cin >> range;
	for (c = 0; c <= range; c++)
	{
		num = pow(x, c);
		sum = sum + (1 / num);
	}
	cout << "Sum of Series: " << sum;
	return 0;
}
