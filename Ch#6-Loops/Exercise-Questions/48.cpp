#include <iostream>
using namespace std;
int main()
{
	int i, j, val;
	i = val = 1;
	while (i <= 7)
	{
		j = 1;
		while (j <= i)
		{
			cout << " " << val;
			j++;
			val += 2;
		}
		cout << endl;
		i++;
	}
	return 0;
}
