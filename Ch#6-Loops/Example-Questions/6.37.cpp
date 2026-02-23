#include <iostream>
using namespace std;
int main()
{
	int num, i, j, cp = 1;
	cout << "Enter a Number: ";
	cin >> num;
	cout << "Product Components of " << num << " are:" << endl;
	for (i = num; i >= cp; i--)
		for (j = 1; j <= num; j++)
		{
			if (i * j == num)
			{
				cout << i << "*" << j << endl;
				cp = j + 1;
			}
		}
	return 0;
}
