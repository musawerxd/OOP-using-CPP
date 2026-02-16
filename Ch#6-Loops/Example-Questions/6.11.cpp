#include <iostream>
using namespace std;
int main()
{
	int num, fake, mod, sum = 0;
	cout << "Enter a Number: ";
	cin >> num;
	fake = num;
	while (fake != 0)
	{
		mod = fake % 10;
		sum = sum + (mod * mod * mod);
		fake /= 10;
	}
	if (sum == num)
		cout << num << " is an Armstrong Number.";
	else
		cout << num << " is not an Armstrong Number.";
	return 0;
}
