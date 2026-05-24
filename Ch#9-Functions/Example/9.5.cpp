#include <iostream>
using namespace std;
int factorial(int n)
{
    int f = 1;
    for (int i = n; i > 0; i--)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int number;
    cout << "Enter a Number: ";
    cin >> number;
    cout << "Factorial of " << number << " is : " << factorial(number);
    return 0;
}