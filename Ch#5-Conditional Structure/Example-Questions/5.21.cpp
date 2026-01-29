#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a Number: ";
	cin >> num;
	if (!(num % 2 == 0))
		cout << num << " is an Odd Number.";
	else
		cout << num << " is an Even Number.";
	return 0;
}
