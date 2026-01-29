#include <iostream>
using namespace std;
int main()
{
	float num1, num2;
	char op;
	cout << "Enter 1st Number: ";
	cin >> num1;
	cout << "Enter Operater: ";
	cin >> op;
	cout << "Enter 2nd Number: ";
	cin >> num2;
	switch (op)
	{
	case '+':
		cout << "Answer: " << num1 + num2;
		break;
	case '-':
		cout << "Answer: " << num1 - num2;
		break;
	case '*':
		cout << "Answer: " << num1 * num2;
		break;
	case '/':
		if (num2 == 0)
			cout << "Division by Zero.";
		else
			cout << "Answer: " << num1 / num2;
		break;
	default:
		cout << "You have entered Invalid Operator!";
	}
	return 0;
}
