#include <iostream>
using namespace std;
struct countryInfo
{
    string Country;
    int population;
};
void compareCountry(countryInfo a, countryInfo b)
{
    if (a.population > b.population)
    {
        cout << a.Country << " has more poplution than " << b.Country;
    }
    else
    {
        cout << b.Country << " has more poplution than " << a.Country;
    }
}
int main()
{
    countryInfo a, b;
    cout << "Enter Name of Country: ";
    cin >> a.Country;
    cout << "Enter Population of " << a.Country << " (in Millions ) : ";
    cin >> a.population;

    cout << "Enter Name of Country: ";
    cin >> b.Country;
    cout << "Enter Population of " << b.Country << " (in Millions ) : ";
    cin >> b.population;

    compareCountry(a, b);
    return 0;
}