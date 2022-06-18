/*Descripción
En un planeta muy extraño, los minutos son de 50 segundos, las horas de 70 minutos y los días de 12 horas. 
Ya que planeas ir de vacaciones a ese planeta, te gustaría tener un reloj que dado un número de segundos S, 
te despliegue el número de días, horas, minutos y segundos de ese planeta. 
Por ejemplo, para S = 3553 han transcurrido 0 días, 1 hora, 1 minuto y 3 segundos. 
Escriba un programa para que tu reloj funcione correctamente.
Entrada
Un entero S. Puedes suponer que 0<=S<=1,000,000
Salida
Cuatro enteros que denoten el número de días, horas, minutos y segundos que han transcurrido.*/
#include <iostream>
using namespace std;

int main() {
    int S, seg, min, hor, dia;
    cin>>S;
    seg = S % 50, S = S / 50;
    min = S % 70, S = S / 70; 
    hor = S % 12, S = S / 12;
    dia = S;
    cout<<dia<<" "<<hor<<" "<<min<<" "<<seg;
    return 0;
}