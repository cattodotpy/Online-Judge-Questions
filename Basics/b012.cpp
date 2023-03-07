#include <iostream>
#include <map>

using namespace std;

int main()
{
    long long cut, num;
    int nums[100000];
    string names[100000];
    map<int, string> m;

    cin >> cut;
    for (int i = 0; i < cut; i++)
    {
        cin >> nums[i] >> names[i];
        m[nums[i]] = names[i];
    }
    sort(nums, nums + cut);
    for (int i = 0; i < cut; i++)
    {
        cout << m[nums[i]] << endl;
    }
}