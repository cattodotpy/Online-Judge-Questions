#include <iostream>
using namespace std;

int main()
{
    long long A, B;

    if (A > 100 && A < -100 && B > 100 && B < -100) {
        return 0;
    }
    cin >> A >> B;
    cout << A * B << endl;
    return 0;
}