#include <iostream>
#include <vector>
using namespace std;



vector<string> x;

string executeCommand(string command)
{
    if (command == "Push")
    {
        string arg;
        cin >> arg;
        x.push_back(arg);
    }
    else if (command == "Size")
    {
        cout << x.size() << endl;
    }
    else if (command == "Query")
    {
        int arg;
        cin >> arg;
        cout << x[arg] << endl;
    }
    else if (command == "Pop")
    {
        x.erase(x.end() - 1);
    }
    return "";
}

int main()
{
    int cut;
    string command;
    cin >> cut;
    for (int i = 0; i < cut; i++)
    {
        cin >> command;
        executeCommand(command);
    }
    return 0;
}