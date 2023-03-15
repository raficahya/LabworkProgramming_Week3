#include<iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    double x1, x2;

    cout << "Input the values a, b, and c" << endl;
    cin >> a >> b >> c;

    double d = (b*b) - 4 * (a*c);

    cout << "Determinant of said function is " << d << endl;

    if (d>0) {
        x1 = ((-1 * b) + sqrt(d))/(2*a);

        x2 = ((-1 * b) - sqrt(d))/(2*a);

        cout << "The values x1 and x2 are " << x1 << " and " << x2 << endl;
    } else if (d == 0) {
        x1 = (-1 * b)/(2*a);
        x2 = x1;

        cout << "The values x1 and x2 are " << x1 << " and " << x2 << endl;
    } else if (d<0) {
        x1 = ((-1 * b)/(2*a)) + (sqrt(abs(d))/(2*a));
        x2 = ((-1 * b)/(2*a)) - (sqrt(abs(d))/(2*a));

        cout << "The values x1 and x2 are imaginary numbers  " << x1 << "i and " << x2 << "i" << endl;
    }



    return 0;
}