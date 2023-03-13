#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> X;
vector<string> Y;

// vector<string> X(1000000);

int main()
{
    int N;
    int num;
    char mode;
    cin >> N >> mode;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        X.push_back(num);
    };

    if (mode == 'M')
    {
        sort(X.begin(), X.end());

        for (int i = 0; i < X.size(); i++)
        {
            cout << X[i] << endl;
        }
    }
    else if (mode == 'W')
    {
        for (int i = 0; i < X.size(); i++)
        {
            Y.push_back(to_string(X[i]));
        }

        sort(Y.begin(), Y.end());

        for (int i = 0; i < Y.size(); i++)
        {
            cout << Y[i] << endl;
        }
    }
    return 0;
}


// credit to RyanChan