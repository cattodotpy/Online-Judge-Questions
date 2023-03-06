#include <iostream>

using namespace std;

int main() {
    long long aw, bo;
    string winner;
    cin >> aw >> bo;

    if (aw == bo) {
        cout << "Draw" << endl;
        return 0;
    } else
    if (aw == 1) {
        cout << "Alice" << endl;
        return 0;
    } else
    if (bo == 1) {
        cout << "Bob" << endl;
        return 0;
    }
    if (aw > bo) {
        winner = "Alice";
    } else if (aw < bo) {
        winner = "Bob";
    } else {
        winner = "Draw";
    }
    cout << winner << endl;
    return 0;
}