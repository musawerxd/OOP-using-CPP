#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter Two Numbers: ";
	cin >> num1 >> num2;
	(num1 > num2 ? cout << num1 << " is Larger." : cout << num2 << " is Larger.");
	return 0;
}
