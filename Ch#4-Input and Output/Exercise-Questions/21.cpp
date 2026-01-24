#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter a Letter: ";
	cin >> ch;
	cout << "The Next two Letters are:\t" << (char)(ch + 1) << "\t" << (char)(ch + 2);
	return 0;
}
