#include <iostream>
using namespace std;

int main()
{
    string input;
    int cut = 0;

    cin >> input;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '1')
        {
            cut++;
        }
    }
    cout << cut << endl;
};
