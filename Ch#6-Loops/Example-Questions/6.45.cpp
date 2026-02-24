#include <iostream>
using namespace std;
int main()
{
	int a, b;
	for (a = 1; a <= 6; a++)
	{
		for (b = a; b > 1; b--)
			cout << "  ";
		for (b = 1; b <= 6 + 1 - a; b++)
			cout << b << " ";
		cout << endl;
	}
	return 0;
}
