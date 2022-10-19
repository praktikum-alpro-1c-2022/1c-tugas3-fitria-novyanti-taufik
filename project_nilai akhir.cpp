#include <iostream>
#include <math.h>

using namespace std;
int main() {
    //PRAKTIKUM (20%),UTS (30%), UAS(50%)
    int nilaiAkhir;
    int praktikum = 75, uts = 70, uas = 88;

    cout << "=== Menghitung Nilai Akhir Mahasiswa ===" << endl;
    cout << " Praktikum = 20% " << endl;
    cout <<" UTS = 30% " << endl;
    cout <<" UAS = 50% " << endl;

    nilaiAkhir = ((0.2*praktikum)+(0.3*uts)+(0.5*uas));
    cout << "Hasil dari nilai akhir mahasiswa adalah = " << nilaiAkhir;


return 0;
}
