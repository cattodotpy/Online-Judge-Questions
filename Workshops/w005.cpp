#include <iostream>
using namespace std;

int main()
{
    long long bal, cost;
    cin >> bal >> cost;
    long long amt = bal / cost;
    long long remin = bal % cost;
    cout << amt << " " << remin << endl;
    return 0;
}