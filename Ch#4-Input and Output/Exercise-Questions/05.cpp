#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "Enter Four Numbers: ";
	cin >> a >> b >> c >> d;
	long sum = a + b + c + d;
	long pro = a * b * c * d;
	double avg = sum / 4.0;
	cout << "Sum of All the Four Numbers is: " << sum << endl;
	cout << "Product of All the Four Numbers is: " << pro << endl;
	cout << "Average of All the Four Numbers is: " << avg;
	return 0;
}
