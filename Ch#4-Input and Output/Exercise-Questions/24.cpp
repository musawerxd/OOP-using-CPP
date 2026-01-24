#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int h, h1, h2, m, m1, m2, s, s1, s2;
	cout << "Enter the Two Times in the format hh mm ss: ";
	cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	s = s1 + s2;
	m = m1 + m2 + s / 60;
	h = h1 + h2 + m / 60;
	s = s % 60;
	m = m % 60;
	cout << "Total Time is: " << setw(2) << setfill('0') << h;
	cout << ' ' << setw(2) << setfill('0') << m << ' ' << setw(2) << setfill('0') << s;
	return 0;
}
