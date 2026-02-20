#include <iostream>
using namespace std;
int main()
{
	int num, sum = 0, c;
	cout << "Enter a Number: ";
	cin >> num;
	for (c = 1; c <= num; c++)
		sum = sum + (c * c);
	cout << "Sum of Squares: " << sum;
	return 0;
}
