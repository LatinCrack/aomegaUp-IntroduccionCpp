#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    if (T < 21)
        cout << "fria!" << endl;
    else if (T <= 29)
        cout << "tibia" << endl;
    else
        cout << "caliente!" << endl;
    
    if (T < 15 || T > 34)
        cout << "RIP escamitas :(" << endl;
}