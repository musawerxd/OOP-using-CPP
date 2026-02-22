#include <iostream>
using namespace std;
int main()
{
	int num, c;
	for (c = 1; c <= 5; c++)
	{
		cout << "Enter a Number: ";
		cin >> num;
		if (num <= 0)
			break;
		cout << "You Entered " << num << "." << endl;
	}
	return 0;
}
