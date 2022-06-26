/* Descripción
La banda robatamales ha asestado un nuevo golpe y están por repartirse el delicioso botín. El líder de la banda 
se quedará con la mitad de los tamales (si el total es impar, también se quedará con el tamal sobrante) y 
los demás se repartirán de manera equitativa entre el resto de la banda. Los tamales que no puedan 
repartirse equitativamente sin partirlos también se los quedará su líder. 
¿Cuántos tamales se comerá el líder de la banda?
Entrada
Dos enteros T, B que denotan el número de tamales robados y el número de miembros de la banda (incluyendo al líder).
Puedes suponer que 0<=T<=1,000,000 y que 2<= B <= 100.
Salida
Un entero que sea el número de tamales que se comerá el líder de la banda.
*/
#include <iostream>
using namespace std;

int main() {
    int T, B;
    cin >> T;
    cin >> B;
    int NTB = (T + 1) / 2;
    NTB += (T - NTB) % (B -1);
    cout << NTB;
}
