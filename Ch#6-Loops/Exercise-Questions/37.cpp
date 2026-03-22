#include <iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5 - i; j++)
			cout << "\t";
		for (int k = 1; k <= i; k++)
			cout << "\t" << k;
		cout << endl;
	}
	return 0;
}
