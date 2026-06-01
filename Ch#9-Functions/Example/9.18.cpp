
#include <iostream>
using namespace std;
void displayArr(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Value at index " << i << " is : " << arr[i] << endl;
    }
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value " << i + 1 << "  :  ";
        cin >> arr[i];
    }
    displayArr(arr);

    return 0;
}