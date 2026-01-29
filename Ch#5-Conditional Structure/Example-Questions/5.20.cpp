#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter any Character: ";
	cin >> ch;
	if (ch >= 'A' && ch <= 'Z')
		cout << "\'" << ch << "'\ is a Capital Letter.";
	else if (ch >= 'a' && ch <= 'z')
		cout << "\'" << ch << "'\ is a Small Case Letter.";
	else if (ch >= '1' && ch <= '9')
		cout << "\'" << ch << "'\ is a Digit.";
	else
		cout << "\'" << ch << "'\ is a Symbol.";
	return 0;
}
