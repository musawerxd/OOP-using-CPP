#include <iostream>
using namespace std;
int main()
{
	long num;
	int p;
	cout << "Enter an Integer: ";
	cin >> num;
	for (int i = 2; i <= num; i++)
	{
		p = 1;
		for (int j = 2; j <= i / 2; j++)
			if (i % j == 0)
			{
				p = 0;
				break;
			}
		if (p == 1)
			cout << i << "\t";
	}
	return 0;
}
