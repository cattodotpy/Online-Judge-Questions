#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double original, result = 0.0, x ;
    cin >> original;
    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        result += x;
    }
    cout << fixed << setprecision(2) << result << endl;
    if (result > original) {
        cout << "Yay" << endl;
    } else if (result < original) {
        cout << "Aii" << endl;
    } else if (result == original) {
        cout << "Unexpected" << endl;
    }
}