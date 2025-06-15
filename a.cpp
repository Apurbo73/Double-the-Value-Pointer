#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    int * ptr = & x;
    * ptr = ( * ptr) * 2;

    cout << x << endl;

    return 0;
}