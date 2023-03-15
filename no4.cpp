#include<iostream>
#include <cmath>

using namespace std;

int main() {
    double n, m;
    double one = 1;

    cout << "Input a number" << endl;
    cin >> n;

    m = fmod(n, one);
    if ( m == 0) {
        cout << n << " is an integer";
    } else {
        cout << n << " is not an integer";
    }


    return 0;
}
