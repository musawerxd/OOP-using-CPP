#include <iostream>
using namespace std;
int main()
{
	int pg, pgdly, days, rem, com;
	cout << "Enter Total Pages of Book: ";
	cin >> pg;
	cout << "How many pages you read daily: ";
	cin >> pgdly;
	cout << "How many days you read the book: ";
	cin >> days;
	com = days * pgdly;
	rem = pg - com;
	cout << "\nYou have read " << com << " pages of the book. " << "Remaining pages are " << rem;
	return 0;
}
