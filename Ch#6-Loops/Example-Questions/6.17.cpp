#include <iostream>
using namespace std;
int main()
{
	int a, b, num, nxt;
	cout << "Enter Number: ";
	cin >> num;
	if (num == 0 || num == 1)
		cout << num << " is a Fibonacci Number.";
	else
	{
		a = 0;
		b = 1;
		nxt = a + b;
		while (nxt < num)
		{
			a = b;
			b = nxt;
			nxt = a + b;
		}
		if (nxt == num)
			cout << num << " is a Fibonacci Number.";
		else
			cout << num << " is not a Fibonacci Number.";
	}
	return 0;
}
