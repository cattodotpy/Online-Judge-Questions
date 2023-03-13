#include <iostream>
#include <vector>
using namespace std;


int ls[1001][1001];

int main()
{
    long long N, M, x, ans = 0;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> x;
            ls[i][j] = x;
        }
    }

    for (int i = 0; i < M; i++)
    {
        int max = 0;
        for (int j = 0; j < N; j++)
        {
            if (ls[j][i] > max)
            {
                max = ls[j][i];
            }
        }
        ans += max;
    }
    cout << ans << endl;
}