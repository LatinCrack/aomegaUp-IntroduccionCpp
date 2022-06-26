/*Descripción
Escribe un programa que lea cuatro años e imprima cuántos días tendrá febrero en esos años.*/
/*RPT = Cuando es multiplo de 4, pero NO es multiplo de 100, a menos que sea de 400*/
/*En Algoritmo = Si es multiplo de 400 O es (Multiplo de 4 Y No es de 100)*/
#include <iostream>
using namespace std;

int main() {
    int A1, A2, A3, A4;
    cin >> A1 >> A2 >> A3 >> A4;
    if ((A1 % 400 == 0) || ((A1 % 4 == 0) && (A1 % 100 !=0))) {
        cout << 29 << " ";
    } else {
        cout << 28 << " ";        
    }
    if ((A2 % 400 == 0) || ((A2 % 4 == 0) && (A2 % 100 !=0))) {
        cout << 29 << " ";
    } else {
        cout << 28 << " ";        
    }
    if ((A3 % 400 == 0) || ((A3 % 4 == 0) && (A3 % 100 !=0))) {
        cout << 29 << " ";
    } else {
        cout << 28 << " ";        
    }
    if ((A4 % 400 == 0) || ((A4 % 4 == 0) && (A4 % 100 !=0))) {
        cout << 29 << " ";
    } else {
        cout << 28 << " ";        
    }        
}