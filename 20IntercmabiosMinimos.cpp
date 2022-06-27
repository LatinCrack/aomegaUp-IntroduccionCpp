/*Descrpcion
    Dados tres enteros A, B y C, calcula el nÃºmero mánimo de intercambios que se necesitan para ordenarlos.
Entrada
    Tres enteros A, B y C en el rango de 0 a 1000000.
Salida
    Un entero con la respuesta.*/
#include <iostream>
using namespace std;

int main() {
    int A, B, C, res = 0;
    cin >> A >> B >> C;

    if (A > B && A > C) {
        if (C > B)
            res = 2;
        else
            res = 1;
    } else if(A > B) {
        res = 1;
    } else if (A > C) {
        if (A == B)
            res = 1;
        else
            res = 2;
    } else {
        if (B > C)
            res = 1;
    }
    cout << res << endl;
}
