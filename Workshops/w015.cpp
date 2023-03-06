#include <iostream>
using namespace std;

long long tmp[1000000];

long long Fibonacci(long long n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (tmp[n] != 0)
    {
        return tmp[n];
    }
    else
    {
        tmp[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
        return tmp[n];
    }
}

int main()
{
    long long n;
    cin >> n;
    cout << Fibonacci(n) << endl;
    return 0;
}