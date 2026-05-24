#include <iostream>
using namespace std;
char checkGrade(int number)
{
    if (number >= 80)
    {
        return 'B';
    }
    else if (number >= 60 && number <= 79)
    {
        return 'B';
    }
    else if (number >= 40 && number <= 59)
    {
        return 'c';
    }
    else
    {
        return 'F';
    }
}
int main()
{

    int number;
    cout << "Enter Your Number: ";
    cin >> number;

    cout << "Your Grade is: " << checkGrade(number);
    return 0;
}