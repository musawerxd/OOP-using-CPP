#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double num, ans;
	cout << "Enter a Positive Number: ";
	cin >> num;
	ans = log(num) / log(2.0);
	cout << "The logarithm of " << num << " to the base 2 is " << ans;
	return 0;
}
