#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string inp;
    getline(cin, inp);
    reverse(inp.begin(), inp.end());
    cout << inp << endl;
    return 0;
}