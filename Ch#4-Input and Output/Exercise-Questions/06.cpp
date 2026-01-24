#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter Your Age: ";
	cin >> age;
	int mon = age * 12;
	cout << "Your Age in Months is: " << mon << endl;
	int days = age * 365;
	cout << "Your Age in Days is: " << days << endl;
	return 0;
}
