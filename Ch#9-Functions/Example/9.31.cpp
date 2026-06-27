#include <iostream>
using namespace std;
int sum(int arr[])
{
    int add = 0;
    for (int i = 0; i < 10; i++)
    {
        add += arr[i];
    }
    return add;
}
int sum(int arr[], char ch)
{
    int add = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0 && ch == 'E' || ch == 'e')
        {
            add += arr[i];
        }
        else if (arr[i] % 2 != 0 && ch == 'O' || ch == 'o')
        {
            add += arr[i];
        }
    }
    return add;
}
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Value " << i + 1 << "  :  ";
        cin >> arr[i];
    }

    cout << "The Sum of all Integers = " << sum(arr) << endl;
    cout << "The Sum of all Even Integers = " << sum(arr, 'E') << endl;
    cout << "The Sum of all Odd Integers = " << sum(arr, 'l') << endl;

    return 0;
}