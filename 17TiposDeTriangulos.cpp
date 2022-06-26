/*Descripción
Mostrar que tipo de triángulo es el que se generaria con 3 datos x,y y z.
    Equilátero: triángulo con los 3 lados iguales.
    Isósceles: triángulo con 2 lados iguales.
    Escaleno: triángulo con los 3 lados desiguales.
Entrada
    3 Numeros enteros que en este caso se tomarian como los lados del triángulo.
Salida
    El tipo de triángulo que es dependiendo de los 3 datos de entrada.*/
#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x == y && y == z) {
        cout << "equilatero" << endl;
    } else if (x == y || y == z || x == z) {
        cout << "isosceles" << endl;
    } else {
        cout << "escaleno" << endl;
    }
}