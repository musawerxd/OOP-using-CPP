#include <iostream>
using namespace std;
int main()
{
	int num, c, p = 1;
	cout << "Enter a Number: ";
	cin >> num;
	for (c = 2; c <= num / 2; c++)
	{
		if (num % c == 0)
			p = 0;
		break;
	}
	if (num == 0 || num == 1)
		cout << num << " is a Composite Number.";
	else if (p == 1)
		cout << num << " is a Prime Number.";
	else
		cout << num << " is a Composite Number.";
	return 0;
}
