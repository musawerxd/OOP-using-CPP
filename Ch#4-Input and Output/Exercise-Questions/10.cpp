#include <iostream>
using namespace std;
int main()
{
	long fee, std;
	cout << "Enter Total Students of the Class: ";
	cin >> std;
	cout << "Enter Fee per Student: ";
	cin >> fee;
	cout << "Total Fee collected from the Class: " << std * fee;
	return 0;
}
