#include <iostream>
#include <cmath>

using namespace std;


bool isPrime(long long x)
{
    if (x == 1)
    {
        return false;
    }
    for (int i = 2; i < sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    long long x, num;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> num;
        if (isPrime(num))
        {
            cout << num << " is a prime!" << endl;
        }
        else
        {
            cout << num << " is not a prime..." << endl;
        }
    }
}