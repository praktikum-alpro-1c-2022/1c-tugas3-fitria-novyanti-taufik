#include <iostream>
#include <math.h>
using namespace std;

int main() {
    //c² = a² + b²
    float alas = 8, tinggi = 10;
    float sisiMiring;

    cout << "=== Menghitung Sisi Miring menggunakan Rumus Phitagoras ===" << endl;
    cout << "Alas = 8" << endl;
    cout << "Tinggi = 10" << endl;

    sisiMiring = sqrt( pow(alas,2) + pow(tinggi,2));
    cout << "Sisi Miring = "<< sisiMiring;

return 0;
}
