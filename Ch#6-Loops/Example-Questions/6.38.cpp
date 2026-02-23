#include <iostream>
using namespace std;
int main()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		cout << 1;
		int sum = 1;
		for (j = 2; j <= i; j++)
		{
			cout << " + " << j;
			sum = sum + j;
		}
		cout << " = " << sum << endl;
	}
	return 0;
}
