#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter a Character: ";
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
		cout << "Entered Character is a Lowercase Letter";
	else
		cout << "Entered Character is not a Lowercase Letter";
	return 0;
}
