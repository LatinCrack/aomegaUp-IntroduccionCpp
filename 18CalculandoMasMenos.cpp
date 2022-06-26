/*Descripcion.- A/B mas/menos C
Los valores distintos que puede tomar la expresión o el mensaje "indefinido" si el resultado está indefinido. 
En caso de que haya más de un valor, éstos pueden imprimirse en cualquier orden. 
Si la expresión sólo puede tomar un valor, éste no debe imprimirse doble.
*/
#include <iostream>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;
    if (B == 0.0) {
        cout << "indefinido" << endl;
        return 0;
    }
    double mas = A / B + C, menos = A / B - C;
    if (mas == menos) {
        cout << mas << endl;
    } else {
        cout << mas << " " << menos << endl;
    }
    return 0;
}