#include <iostream>

using namespace std;

// Fungsi untuk menghitung perkalian deret bilangan ganjil
long long perkalianDeret(int n) {
    long long hasil = 1;
    for (int i = 1; i <= n; i += 2) {
        hasil *= i;
    }
    return hasil;
}

// Fungsi untuk mencetak segitiga siku
void segitigaSiku(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                cout << "1";
            } else {
                cout << " * " << (2*j - 1);
            }
        }
        cout << " = " << perkalianDeret(2*i - 1) << endl;
    }
}

int main() {
    int n = 5; // Jumlah baris segitiga siku
    segitigaSiku(n);
    return 0;
}