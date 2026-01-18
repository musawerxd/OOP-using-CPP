/* Write a program that solves the following expression:
a * b / ( - c * 31 % 13 ) * d
Assuming the values of variables are as follows:
a=10, b=20, c=15, d=8, e=40 */

#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, ans;
	a = 10, b = 20, c = 15, d = 8;
	ans = a * b / (-c * 31 % 13) * d;
	cout << "Expression: a*b/(-c*31%13)*d" << endl
		 << endl;
	cout << "Result of above expression is: " << ans << endl;
	return 0;
}
