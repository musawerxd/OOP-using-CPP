#include <iostream>
using namespace std;
struct student
{
	int roll, marks[5];
};
int main()
{
	struct student s;
	float sum = 0, avg;
	cout << "Enter Roll No: ";
	cin >> s.roll;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Marks: ";
		cin >> s.marks[i];
		sum = sum + s.marks[i];
	}
	cout << endl
		 << "Roll No: " << s.roll;
	cout << endl
		 << "Total Marks: " << sum;
	avg = sum / 5;
	cout << endl
		 << "Average: " << avg;
	return 0;
}
