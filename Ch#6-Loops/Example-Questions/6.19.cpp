#include <iostream>
using namespace std;
int main()
{
	int num1, num2, p = 1, c = 1;
	cout << "Enter First Number: ";
	cin >> num1;
	cout << "Enter Second Number: ";
	cin >> num2;
	do
	{
		p = p * num1;
		c++;
	} while (c <= num2);
	cout << "Result is: " << p;
	return 0;
}
