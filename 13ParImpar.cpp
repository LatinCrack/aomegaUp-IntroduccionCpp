/* Descripción
    Solicitar al usuario una número e indicar si es 'par' o 'impar'.
Entrada
    Un número.
Salida
    La palabra 'par' o 'impar', dependiendo del número. Sin los apóstrofes.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << "par";
    } else {
        cout << "impar";
    }
}