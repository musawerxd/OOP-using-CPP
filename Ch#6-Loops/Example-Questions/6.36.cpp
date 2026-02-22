#include <iostream>
using namespace std;
int main()
{
	int num1, num2, div;
	cout << "Enter First  Number: ";
	cin >> num1;
	cout << "Enter Second Number: ";
	cin >> num2;
	div = (num1 < num2) ? num1 : num2;
	for (; div >= 1; div--)
	{
		if ((num1 % div == 0) && (num2 % div == 0))
			break;
	}
	cout << "Greatest Common Divisor of " << num1 << " and " << num2 << " is: " << div;
	return 0;
}
