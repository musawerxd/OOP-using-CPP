#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	for (a = 5; a >= 1; a--)
	{
		for (c = 1; c <= 5 - a; c++)
			cout << " ";
		for (b = 1; b <= a; b++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
