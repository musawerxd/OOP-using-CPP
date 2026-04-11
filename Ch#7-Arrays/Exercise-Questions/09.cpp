#include <iostream>
using namespace std;
int main()
{
	int row, std, sc[5][5] = {{50, 99, 36, 67, 91}, {49, 23, 78, 90, 85}, {58, 79, 80, 85, 82}, {27, 52, 71, 56, 82}, {60, 61, 33, 50, 71}};
	cout << "Enter Row Number: ";
	cin >> row;
	cout << "Enter Student Number: ";
	cin >> std;
	if (row < 1 || row > 5 || std < 1 || std > 5)
		cout << "Invalid Input";
	else
		cout << "Score of the Student: " << sc[row - 1][std - 1];
	return 0;
}
