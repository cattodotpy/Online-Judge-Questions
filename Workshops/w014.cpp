#include <iostream>
using namespace std;

bool isPrime(long long num)
{
    if (num == 1)
        return false;
    if (num % 2 == 0 && num != 2)
        return false;
    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    long long n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
            count++;
    }
    cout << count << endl;
    return 0;
}