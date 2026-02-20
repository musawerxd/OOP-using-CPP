#include <iostream>
using namespace std;
int main()
{
	int c, num = 1, minus;
	cout << "The Series is as follow:\n";
	for (c = 1; num <= 40; c++)
	{
		if (num % 2 == 0)
		{
			minus = -num;
			cout << minus << "   ";
		}
		else
			cout << num << "   ";
		num = num + 3;
	}
	return 0;
}
