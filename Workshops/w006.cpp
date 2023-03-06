#include <bits/stdc++.h>
using namespace std;

int main()
{
    double amt, rec, years; 
    cin >> amt >> rec >> years;

    amt = amt * (1 + rec * years / 100);

    cout << fixed << setprecision(3) << amt << endl;
}

