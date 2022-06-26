#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;
    double l1 =  sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double l2 =  sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    double l3 =  sqrt((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4));
    double l4 =  sqrt((x4 - x1) * (x4 - x1) + (y4 - y1) * (y4 - y1));
    double respuesta = 1000000000.0;
    if (l1 < respuesta) {
        respuesta = l1;
    }
    if (l2 < respuesta) {
        respuesta = l2;
    }
    if (l3 < respuesta) {
        respuesta = l3;
    }
    if (l4 < respuesta) {
        respuesta = l4;
    }
    cout << respuesta;
}
