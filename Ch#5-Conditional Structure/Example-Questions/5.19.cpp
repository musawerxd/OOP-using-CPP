#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter any Character: ";
	cin >> ch;
	if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
		cout << ch << " is a Vowel.";
	else
		cout << ch << " is not a Vowel.";
	return 0;
}
