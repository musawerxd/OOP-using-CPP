// Write a program that divide two float variables and finds the remainder by using Explicit Casting.

#include <iostream>
using namespace std;
int main()
{
	float value1, value2;
	int ans;
	value1 = 10.3;
	value2 = 5.2;
	ans = (int)value1 % (int)value2;
	cout << "Result is " << ans;
	return 0;
}
