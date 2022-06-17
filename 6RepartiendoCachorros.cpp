/*
Descripción
La perrita de Don Pancho acaba de dar a luz C cachorros. Como a Don Pancho le gustan mucho los perritos, 
planea quedarse con al menos P de ellos y los demás intentará repartirlos equitativamente entre el resto de su familia, 
que incluye a su esposa además de sus H hijos. Los cachorros que no pueda repartir equitativamente entre ellos 
también se los quedará él. ¿Con cúantos cachorros se quedará Don Pancho?

Entrada
Tres enteros C, P y H. Puedes suponer que 0 <= C, P, H <= 1000 y P <= C.

Salida
Un entero que sea el número de cachorros con los que se quedará Don Pancho.
*/
#include <iostream>
using namespace std;

int main() {
    int C,P,H;
    cin>>C>>P>>H;
    
    int perrosPancho = P;
    C -= P;
    perrosPancho += C % (H + 1);
    cout<<perrosPancho<<endl;
    return 0;
}