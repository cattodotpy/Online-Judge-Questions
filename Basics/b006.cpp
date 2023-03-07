#include <iostream>
using namespace std;

int main()
{
    long long year;
    cin >> year;
    year -= 1961;
    int gen = year / 2;
    gen += 1;

    if (year % 2 == 1)
    {
        cout << "TWGSS " << gen << "s" << endl;
    }
    else
    {
        cout << "TWGSS " << gen << endl;
    }
    return 0;
}