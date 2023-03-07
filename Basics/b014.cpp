#include <iostream>
using namespace std;

long long arr[1000000];
long long e[100000];
int main()
{
    long long cut, que, ans, a, y;
    cin >> cut >> que;
    for (long long i = 1; i < cut+1; i++)
    {
        cin >> arr[i];
    }
    for (int x = 1; x < cut+1; x++)
    {
        e[x] = e[x - 1] + arr[x];
    }
    for (long long i = 0; i < que; i++)
    {
        cin >> a >> y;
        ans = e[y] - e[a - 1];
        cout << ans << endl;
    }

    return 0;
}