#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double miDouble = 1234567890.0 / 10000000000.0;
	
	cout << miDouble << endl;
	cout << fixed << setprecision(2) << miDouble << endl;
	cout << fixed << setprecision(10) << miDouble << endl;

	return 0;
}