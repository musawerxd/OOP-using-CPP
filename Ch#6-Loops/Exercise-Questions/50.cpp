#include <iostream>
using namespace std;
int main()
{
	int ht;
	cout << "Enter Height of the Triangle: ";
	cin >> ht;
	for (int i = 1, sp = ht - 1; i <= ht; i++, sp--)
	{
		for (int j = 0; j <= sp; j++)
			cout << " ";
		for (int k = 1; k < 2 * i; k++)
		{
			if (k == 1 || k == 2 * i - 1 || i == ht)
				cout << "&";
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}
