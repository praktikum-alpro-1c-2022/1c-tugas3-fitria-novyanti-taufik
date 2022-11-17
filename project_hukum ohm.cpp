#include <iostream>

using namespace std;
int main() {
    float I, V, R;

    cout << "=== Menghitung Arus ===" << endl;
        cout << "Masukan Tegangan = ";
        cin >> V;

        cout << "Masukan Hambatan = ";
        cin >> R;
    I = V/R;
    cout << "Hasil dari Arus adalah = " << I << " A" << endl;


    cout << "==============================" << endl;


    cout << "=== Menghitung Tegangan ===" << endl;
        cout << "Masukan Arus = ";
        cin >> I;

        cout << "Masukan Hambatan = ";
        cin >> R;
    V = I*R;
    cout << "Hasil dari Tegangan adalah = " << V << " V" << endl;


    cout << "==============================" << endl;


    cout << "=== Menghitung Hambatan ===" << endl;
        cout << "Masukan Tegangan = ";
        cin >> V;

        cout << "Masukan Arus = ";
        cin >> I;
    R = V/I;
    cout << "Hasil dari Tegangan adalah = " << R << " ohm" << endl;

return 0;


}
