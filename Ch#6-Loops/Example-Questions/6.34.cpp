#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	for (int c = 1; c < 100; c++)
	{
		if (c % 2 == 0)
			continue;
		sum = sum + c;
	}
	cout << "The Sum is " << sum;
	return 0;
}
