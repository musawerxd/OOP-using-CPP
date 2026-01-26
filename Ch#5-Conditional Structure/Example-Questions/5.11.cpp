#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter First integer: ";
	cin >> num1;
	cout << "Enter Second integer: ";
	cin >> num2;
	if (num1 % num2 == 0)
		cout << "The First Number is a Multiple of Second Number.";
	else
		cout << "The First Number is not a Multiple of Second Number.";
	return 0;
}
