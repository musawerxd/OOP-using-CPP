#include <iostream>
using namespace std;
int main()
{
	const int s = 5;
	int num[s], sq[s], cube[s], sum[s];
	// Store the Numbers in the Array:
	for (int a = 0; a < s; a++)
		num[a] = a, sq[a] = a * a, cube[a] = a * a * a, sum[a] = num[a] + sq[a] + cube[a];
	// Output the Sums Array and Add up all the Sums:..
	int total = 0;
	cout << "Numbers:\t";
	for (int a = 0; a < 5; a++)
		cout << num[a] << "\t";
	cout << endl;
	cout << "Squares:\t";
	for (int a = 0; a < 5; a++)
		cout << sq[a] << "\t";
	cout << endl;
	cout << "Cubes:\t\t";
	for (int a = 0; a < 5; a++)
		cout << cube[a] << "\t";
	cout << endl;
	cout << "Sums:\t\t";
	for (int a = 0; a < 5; a++)
	{
		cout << sum[a] << "\t";
		total = total + sum[a];
	}
	cout << endl;
	cout << "Grant Total:  " << total;
	return 0;
}
