#include <iostream>
using namespace std;

int main() {
    double a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    double y = (a2 * c1 - a1 * c2) / (a2 * b1 - a1 * b2);
    double x = (c1 - b1 * y) / a1;
    cout << x << " " << y << endl;
}