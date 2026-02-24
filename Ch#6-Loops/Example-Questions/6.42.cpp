#include <iostream>
using namespace std;
int main()
{
	int i = 4, j;
	do
	{
		j = i;
		do
		{
			cout << i << "\t";
			j--;
		} while (j >= 1);
		cout << endl;
		i--;
	} while (i >= 1);
	return 0;
}
