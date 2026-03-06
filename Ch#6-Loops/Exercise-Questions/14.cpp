#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	unsigned long num, c, f;
	char input;
	while (input != '0') // Another Method:     while(input!='\r')
	{
	label:
		f = 1;
		cout << "Enter Number to find its Factorial: ";
		cin >> num;
		if (num >= 12)
			cout << "Its Answer is greater than from Data Type Range...\n";
		else
		{
			for (c = 1; c <= num; c++)
			{
				f = f * c;
			}
			cout << "Factorial of (" << num << "!) is: " << f << endl;
		}
		cout << endl
			 << "Do you want to Calculate another Factorial?\nIf Yes, then press 1 but if No, press 0 to exit from program." << endl
			 << endl;
		input = getch();
		if (input == '1')
		{
			system("CLS");
			goto label;
		}
		/*Another Method:	else if(input=='0')
								break; */
	}
	return 0;
}

/*Note:    We can find Factorial only between the values 1 to 11. Because if the user enters value more than 11, then its result is larger than from unsigned long data type range and it shows dummy value as the answer. unsigned long is the largest integer data type in C++.*/
