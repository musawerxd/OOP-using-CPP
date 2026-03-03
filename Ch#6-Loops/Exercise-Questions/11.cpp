#include <iostream>
using namespace std;
int main()
{
	int marks, nos, m1 = -1, m2 = -2;
	cout << "Enter the Number of Students: ";
	cin >> nos;
	for (int i = 0; i < nos; i++)
	{
		cout << "Enter a Student Marks: ";
		cin >> marks;
		if (marks > m1)
		{
			m2 = m1;
			m1 = marks;
		}
		else if (marks > m2)
			m2 = marks;
	}
	cout << "\nHighest Marks is: " << m1 << endl;
	cout << "Second Highest Marks is: " << m2;
	return 0;
}
