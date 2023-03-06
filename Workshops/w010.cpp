#include <iostream>

using namespace std;

int main()
{
    int e = 0;
    string x;
    // while (1) {
    //     getline(cin, x);
    //     if (x == "Full!") {
    //         break;
    //     }
    //     cout << "Are you full?" << endl;
    //     e += 1;
    // };
    while (cin >> x)
    {
        if (x == "Full!")
        {
            break;
        }
        cout << "Are you full?" << endl;
        e++;
    }
    cout << e << endl;
}