// (x + x(y + z al cuadrado))/((x + pi)(y + pi))

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z, pi = acos(-1);
    cin>>x>>y>>z;
    double rpta = (x + x * (y + z * z))/((x + pi) * (y + pi));
    cout<<rpta<<endl;
    return 0;
}