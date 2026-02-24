#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i, j;
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= i; j++)
			cout << setw(2) << i * j;
		cout << endl;
	}
	for (i = 2; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
			cout << setw(2) << i * j;
		cout << endl;
	}
	return 0;
}
