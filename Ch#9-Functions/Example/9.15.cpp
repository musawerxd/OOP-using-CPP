#include <iostream>
using namespace std;

long double calculateSeries(int denominator)
{
    long double fact = 1.0;
    long double Sum = 0.0;
    for (int i = 1; i <= denominator; i++)
    {
        fact *= i;
        Sum += 1.0 / fact;
    }
    return Sum;
}

int main()
{
    int denominator;
    cout << "Enter the Maximum Number of Denominator : ";
    cin >> denominator;

    cout << "Sum of Series is : " << calculateSeries(denominator);
    return 0;
}