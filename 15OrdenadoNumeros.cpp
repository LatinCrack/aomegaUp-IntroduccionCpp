/*Descripción
Escribe un programa que lea cuatro enteros y los imprima ordenados.*/
#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, tmp;
    cin >> A >> B >> C >> D;
    //Ordenamos para que el mayor este en D
    if (A > B) {
        tmp = A, A = B, B = tmp;
    }
    if (B > C) {
        tmp = B, B = C, C = tmp;
    }
    if (C > D) {
        tmp = C, C = D, D = tmp;
    }
     //Ordenamos para que el mayor este en C
    if (A > B) {
        tmp = A, A = B, B = tmp;
    }
    if (B > C) {
        tmp = B, B = C, C = tmp;
    }
     //Ordenamos los valores A y B
         if (A > B) {
        tmp = A, A = B, B = tmp;
    }         
    cout << A << " " << B << " " << C << " " << D;
}