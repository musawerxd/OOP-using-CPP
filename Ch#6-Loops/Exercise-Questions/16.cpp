#include <iostream>
using namespace std;
int main()
{
	long num, n1, n2;
	num = n1 = n2 = 0;
	do
	{
		if (num > n1)
		{
			n2 = n1;
			n1 = num;
		}
		else if (num > n2)
			n2 = num;
		cout << "Enter a Number (0 to Exit):  ";
		cin >> num;
	} while (num != 0);
	cout << "\nSecond Largest Number is:  " << n2;
	return 0;
}
