#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter Three Digits Number: ";
	cin >> num;
	int a = num / 100;
	num = num % 100;
	int b = num / 10;
	int c = num % 10;
	cout << a << endl
		 << b << endl
		 << c;
	return 0;
}
