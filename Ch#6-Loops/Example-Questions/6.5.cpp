#include <iostream>
using namespace std;
int main()
{
	int num, c = 1;
	cout << "Enter Number to Write its Table: ";
	cin >> num;
	while (c <= 10)
	{
		cout << num << " * " << c << " = " << num * c << endl;
		c++;
	}
	return 0;
}
