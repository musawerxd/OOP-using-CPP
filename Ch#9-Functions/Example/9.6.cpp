#include <iostream>
using namespace std;
string PEO(int number)
{
    int isPrime = 1;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            isPrime = -1;
            break;
        }
    }
    if (isPrime == 1)
    {
        return "Prime";
    }
    else if (number % 2 == 0)
    {
        return "Even";
    }
    else
        return "Odd";
}
int main()
{
    int number;
    cout << "Enter a Number: ";
    cin >> number;
    cout << "The Number " << number << " is : " << PEO(number);
    return 0;
}