#include <iostream>
using namespace std;
int main()
{
	char c;
	do
	{
		cout << "Enter the Current State of Telephone (\'w'\ for Working and \'d'\ for Dead): ";
		cin >> c;
		if (c == 'w')
			cout << "Telephone is Working...";
		else if (c == 'd')
			cout << "Telephone is Dead...";
	} while (c != 'w' && c != 'd');
	return 0;
}
