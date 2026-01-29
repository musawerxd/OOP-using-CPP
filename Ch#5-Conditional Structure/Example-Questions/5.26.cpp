#include <iostream>
using namespace std;
int main()
{
	int choice, months;
	double charges;
	cout << "Health Club Membership Menu\n\n";
	cout << "\t1. Standard Adult Membership" << endl;
	cout << "\t2. Child Membership" << endl;
	cout << "\t3. Senior Citizen Membership" << endl;
	cout << "\t4. Quit the Program\n"
		 << endl;
	cout << "Enter Your Choice: ";
	cin >> choice;
	if (choice >= 1 && choice <= 3)
	{
		cout << "For How many Months: ";
		cin >> months;
		switch (choice)
		{
		case 1:
			charges = months * 50.0;
			break;
		case 2:
			charges = months * 20.0;
			break;
		case 3:
			charges = months * 30.0;
			break;
		}
		cout << "\nThe Total Membership Charges are:  Rs. " << charges;
	}
	else if (choice == 4)
		;
	/*Here I have used Statement Terminator at the end of else-if statement
	because it asks for a statement inside it. But I did not want to
	execute any statement. Actually, I want that when User input 4 as choice,
	Program should be exited without running any statement. So, When user
	input 4 as choice, Statement Terminator terminates the whole statement
	and exits from program as per our program requirement.
	Actually, this is a trick (When I want to execute only else-if statement
	without using any statement inside it. Statement Terminator is used).
	However, this trick is against our Syntax Rule.
	I have used this trick as an alternate to break statement.
	Because break statement is only used with loops and switch statements,
	it cannot be used with if-else statements.*/
	else
	{
		cout << "\nThe Valid Choices are 1 to 4.\n";
		cout << "Run the Program again and Select one of these.";
	}
	return 0;
}
