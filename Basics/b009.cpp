#include <iostream>
using namespace std;

long long executeCommand(string command, long long num, long long arg)
{
    if (command == "add") {
        num += arg;
    }
    else if (command == "minus") {
        num -= arg;
    }
    return num;
}
int main()
{
    long long original_num, cut, num, arg;
    string command;

    cin >> original_num >> cut;
    num = original_num;
    for (int i = 0; i < cut; i++)
    {
        cin >> command >> arg;
        num = executeCommand(command, num, arg);
    }
     
    if (num > original_num || num < 0)
    {
        cout << -1 << endl;
    } else {
        cout << num << endl;
    }
    return 0;
}