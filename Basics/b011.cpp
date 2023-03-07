#include <iostream>
using namespace std;

int main()
{
    long long i, amt = 1500, turn = 0, highest = 1500;
    while (amt >= 0 && cin >> i)
    {
        amt += i;
        turn++;
        if (amt > highest)
        {
            highest = amt;
        }
    }
    cout << turn << endl
         << highest << endl;
    return 0;
}


