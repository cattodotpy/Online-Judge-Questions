#include <iostream>

using namespace std;

int main()
{
    long long N; // declare
    int x, n; // declare
    x = 0; // x = 0
    cin >> N;
    for (int i = 0; N > i; i++)
    {
        cin >> n;
        if (n % 10 != 0)
        {
            x += n;
        };
    }
    cout << x << endl;
}