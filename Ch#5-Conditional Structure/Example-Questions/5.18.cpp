#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	cout << "Enter Three Numbers: ";
	cin >> num1 >> num2 >> num3;
	if (num1 > num2 && num1 > num3)
		cout << num1 << " is the Maximum Number.";
	else if (num2 > num1 && num2 > num3)
		cout << num2 << " is the Maximum Number.";
	else
		cout << num3 << " is the Maximum Number.";
	return 0;
}
