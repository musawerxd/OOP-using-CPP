#include <iostream>
using namespace std;
void pattern(int number, char sym)
{
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            cout << sym;
        }
        cout << endl;
    }
}
int main()
{
    int number;
    char sym;
    cout << "Enter Number: ";
    cin >> number;
    cout << "Enter Symbol";
    cin >> sym;

    pattern(number, sym);

    return 0;
}