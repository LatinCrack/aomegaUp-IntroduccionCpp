#include <iostream>
using namespace std;

int main() {
    double x, y, z;
    cin>>x;
    y = ( x + 5 ) / (2 * (x + 1));
    z = (y * y + x * (x -2 * y)) / (x * y);
    cout<<z;
    return 0;
}