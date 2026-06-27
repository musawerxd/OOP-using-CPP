#include <iostream>
using namespace std;
int factorail(int number)
{
    int result;
    if (number == 0)
    {
        return 1;
    }
    else
        return number * factorail(number - 1);
}
int main()
{
    int number;
    cout << "Enter a Number to Calculate its Factorial : ";
    cin >> number;

    cout << "Factorial of " << number << " is : " << factorail(number);
    return 0;
}