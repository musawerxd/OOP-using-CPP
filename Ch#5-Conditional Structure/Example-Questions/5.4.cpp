#include <iostream>
using namespace std;
int main()
{
	int sub1, sub2, sub3;
	float avg;
	cout << "Enter Marks of 1st Subject: ";
	cin >> sub1;
	cout << "Enter Marks of 2nd Subject: ";
	cin >> sub2;
	cout << "Enter Marks of 3rd Subject: ";
	cin >> sub3;
	avg = (sub1 + sub2 + sub3) / 3.0;
	if (avg >= 80)
	{
		cout << "You are above standard!" << endl;
		cout << "Admission granted!";
	}
	return 0;
}
