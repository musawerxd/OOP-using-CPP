#include <iostream>
using namespace std;
int main()
{
	int tbl, len, c;
	cout << "Enter Number for Table: ";
	cin >> tbl;
	cout << "Enter Length of  Table: ";
	cin >> len;
	for (c = 1; c <= len; c++)
		cout << tbl << " * " << c << " = " << tbl * c << endl;
	return 0;
}
