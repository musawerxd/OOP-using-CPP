#include <iostream>
using namespace std;
int main()
{
	for (int row = 1; row <= 5; row++)
	{
		for (int sp = 1; sp <= 5 - row; sp++)
			cout << "  ";
		for (int ast = 1; ast <= 2 * row - 1; ast++)
			cout << " *";
		cout << endl;
	}
	for (int row = 4; row >= 1; row--)
	{
		for (int sp = 1; sp <= 5 - row; sp++)
			cout << "  ";
		for (int ast = 1; ast <= 2 * row - 1; ast++)
			cout << " *";
		cout << "\n";
	}
	return 0;
}
