#include <iostream>
using namespace std;
int main()
{
	long num;
	int p = 1;
	cout << "Enter a Number: ";
	cin >> num;
	for (int i = 2; i < num; i++)
		if (num % i == 0)
		{
			p = 0;
			break;
		}
	if (p == 1)
		cout << num << " is a Prime Number";
	else
		cout << num << " is not a Prime Number";
	return 0;
}
