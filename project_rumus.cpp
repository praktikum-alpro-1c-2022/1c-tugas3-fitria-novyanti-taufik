#include <iostream>
#include <math.h>

using namespace std;

int main() {
    //Y = bx^2 + 0,5x - c
    float Y, b = 25, x = 15, c = 20;

    cout << "=== Program Untuk Menyelesaikan Rumus ===" << endl;
    cout << "Buat program untuk menyelesaikan rumus: " << endl;
    cout << "Y = bx2 + 0,5x - c, dimana nilai b = 25, x=15, c=20 " << endl;

    Y = (b*(x*x))+0.5*(x)-c;
    cout << "Hasilnya adalah = " << Y;


return 0;
}
