/* Tu mejor amigo y tú siempre sacan la mejor calificación en matemáticas 
(y además acaban los exámenes al mismo tiempo), por lo que siempre han tenido la duda de quién es el mejor 
haciendo cálculos. Un día, un compañero de ambos los retó a que jugaran un reto de cálculo mental; 
el que lo resolviera primero sería el mejor en matemáticas de la escuela. El reto consiste en, 
dado un número inicial R:
Calcular el resultado de R+5.
Al resultado anterior, elevarlo al cuadrado.
Al resultado anterior, dividirlo entre un tercio del número original R.
Al resultado anterior, elevarlo al cubo.
Como el título de ser el mejor de matemáticas en la escuela es sumamente importante, tendrás un día para practicar.
Escribe un programa que te ayude a verificar los resultados que vas realizando a cada paso.

*/

 #include <iostream>
 using namespace std;

 int main() {
    double R;
    cin>> R;
    double R2 = R+5;
    double R3 = R2 * R2;
    double R4 = R3 / (R/3);
    double R5 = R4 * R4 * R4;
    cout<<R<< " " <<R2<< " " <<R3<< " " <<R4<< " " <<R5;
    return 0;
 }