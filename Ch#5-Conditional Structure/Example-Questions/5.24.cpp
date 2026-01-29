#include <iostream>
using namespace std;
int main()
{
	char c;
	cout << "Enter an Alphabet: ";
	cin >> c;
	switch (c)
	{
	case 'A':
	case 'a':
		cout << "You entered a Vowel.";
		break;
	case 'E':
	case 'e':
		cout << "You entered a Vowel.";
		break;
	case 'I':
	case 'i':
		cout << "You entered a Vowel.";
		break;
	case 'O':
	case 'o':
		cout << "You entered a Vowel.";
		break;
	case 'U':
	case 'u':
		cout << "You entered a Vowel.";
		break;
	default:
		cout << "You entered a Consonant.";
	}
	return 0;
}
