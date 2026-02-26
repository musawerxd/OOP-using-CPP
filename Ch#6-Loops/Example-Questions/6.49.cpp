#include <iostream>
using namespace std;
int main()
{
	char choice;
	int a, b, cnt = 1;
	cout << "Enter Any Character: ";
	cin >> choice;
	for (a = 0; a < 5; ++a)
	{
		cout << endl;
		for (b = 0; b < 5 * 2 - 1; ++b)
		{
			if (b == a || b == (5 * 2 - 1) - cnt)
				cout << choice;
			else
				cout << " ";
		}
		++cnt;
	}
	return 0;
}
