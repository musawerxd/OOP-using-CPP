#include <iostream>
using namespace std;
int main()
{
	long num, a = 0, b = 1, nxt, c;
	cout << "Enter Number to Specify Fibonacci Series Range: ";
	cin >> num;
	cout << "\nFibonacci Series up to (" << num << ") is:\n"
		 << a << "\t" << b;
	for (c = 2; c <= num + 1; c++)
	{
		nxt = a + b;
		a = b;
		b = nxt;
		if (nxt <= num)
			cout << "\t" << nxt;
		else if (nxt > num)
			break;
	}
	return 0;
}
