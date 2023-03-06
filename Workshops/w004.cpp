#include <iostream>
using namespace std;

int main(){
    long long a, b, perimeter, area; 
    cin >> a >> b;
    perimeter = (a+b)*2;
    area = a*b;
    cout << perimeter << endl;
    cout << area << endl;
    return 0;
}