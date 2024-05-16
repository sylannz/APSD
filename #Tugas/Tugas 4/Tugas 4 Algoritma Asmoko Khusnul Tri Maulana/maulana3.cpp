#include <iostream>
#include <vector>

int main() {
    // Mendefinisikan jumlah deret
    const int jumlah_deret = 10;

    // Mendefinisikan nilai awal bilangan ganjil
    int bilangan_ganjil = 1;

    // Inisialisasi variabel untuk menyimpan hasil penjumlahan
    int sum_ganjil = 0;

    // Vector untuk menyimpan deret bilangan ganjil
    std::vector<int> deret_ganjil;

    // Menggunakan loop untuk menghitung 10 bilangan ganjil pertama
    for (int i = 0; i < jumlah_deret; ++i) {
        deret_ganjil.push_back(bilangan_ganjil);
        sum_ganjil += bilangan_ganjil;
        bilangan_ganjil += 2;
    }

    // Menampilkan deret bilangan ganjil
    for (int i = 0; i < deret_ganjil.size(); ++i) {
        std::cout << deret_ganjil[i];
        if (i < deret_ganjil.size() - 1) {
            std::cout << " + ";
        }
    }

    // Menampilkan hasil
    std::cout << " = " << sum_ganjil << std::endl;

    return 0;
}