#include <iostream>
using namespace std;

string e(string x)
{
    string out;
    int size = x.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            out += x[i];
            out = out.substr(i, size);
            out += x[size - i];
        };
    }
    return out;
}

int main()
{
    string x;
    cin >> x;
    cout << e(x) << endl;
    return 0;
}