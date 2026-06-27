#include <iostream>
using namespace std;
int sumofArr(int arr[], int size, char sm = '+')
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0 && sm == '+')
        {
            sum += arr[i];
        }
        else if (arr[i] < 0 && sm == '-')
        {
            sum += arr[i];
        }
    }
    return sum;
}
int main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value " << i + 1 << "  :  ";
        cin >> arr[i];
    }

    cout << "Positive Number's Sum is : " << sumofArr(arr, size) << endl;
    cout << "Negative Number's Sum is : " << sumofArr(arr, size, '-') << endl;

    return 0;
}