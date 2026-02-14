#include <iostream>
using namespace std;
int main()
{
	int num, real, mod, sum = 0;
	cout << "Enter an Integer: ";
	cin >> num;
	real = num;
	while (num != 0)
	{
		mod = num % 10;
		if (mod == 0)
			sum = sum + mod;
		else
			sum = sum + mod;
		num = num / 10;
	}
	cout << "The Sum of Integers " << real << " is: " << sum;
	return 0;
}
