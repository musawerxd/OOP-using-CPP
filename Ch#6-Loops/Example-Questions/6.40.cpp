#include <iostream>
using namespace std;
int main()
{
	int a, b;
	for (a = 1; a <= 7; a++)
	{
		b = a;
		while (b <= 7)
		{
			cout << "*";
			b++;
		}
		cout << "\n";
	}
	return 0;
}
