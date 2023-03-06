#include <iostream>


int array[10];
using namespace std;
int main()
{
    int idx, que, x, nums[100000];
    cin >> idx >> que;

    for (int i = 0; i < idx; i++)
    {
        cin >> nums[i];
    }
    for (int i = 0; i < que; i++)
    {
        cin >> x;
        cout << nums[x] << endl;
    };
    return 0;
}