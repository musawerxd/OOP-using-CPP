#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int chr = -1, wrd = 1;
	// Another Method:	int chr=0;
	char ch;
	cout << "Enter a Sentence: ";
	while (ch != '\r')
	{
		ch = getche();
		if (ch == ' ')
			wrd++;
		else
			chr++;
	}
	cout << "\nNumber of Words: " << wrd << endl;
	cout << "Number of Characters: " << chr;
	// Another Method:	cout<<"Number of Characters: "<<chr-1;
	return 0;
}
