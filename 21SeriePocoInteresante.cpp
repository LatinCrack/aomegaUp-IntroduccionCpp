#include <iostream>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P;
    P %= 3;
    int adelante = (N + P) % 3;
    if (adelante == 0) adelante = 3;
    int atras = (N - P + 3) % 3;
    if (atras == 0) atras = 3;
    cout << atras << " " << adelante << endl; 
}