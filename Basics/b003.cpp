#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string a, b;
    int i;
    getline(cin, a);
    b = a;
    reverse(a.begin(), a.end());
    if (a.size() % 2 == 0)
    {
        for (i = 0; i < a.size() / 2; i++)
        {
            cout << b[i];
            cout << a[i];
        }
    }
    else
    {
        for (i = 0; i < a.size() / 2; i++)
        {
            cout << b[i];
            cout << a[i];
        }
        cout << b[i];
    }
    return 0;
}