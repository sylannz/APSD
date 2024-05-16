#include <iostream>
#include <vector>

int main() {
    // Mendefinisikan jumlah deret
    const int jumlah_deret = 10;

    // Mendefinisikan nilai awal bilangan genap
    int bilangan_genap = 2;

    // Inisialisasi variabel untuk menyimpan hasil penjumlahan
    int sum_genap = 0;

    // Vector untuk menyimpan deret bilangan genap
    std::vector<int> deret_genap;

    // Menggunakan loop untuk menghitung 10 bilangan genap pertama
    for (int i = 0; i < jumlah_deret; ++i) {
        deret_genap.push_back(bilangan_genap);
        sum_genap += bilangan_genap;
        bilangan_genap += 2;
    }

    // Menampilkan deret bilangan genap
    for (int i = 0; i < deret_genap.size(); ++i) {
        std::cout << deret_genap[i];
        if (i < deret_genap.size() - 1) {
            std::cout << " + ";
        }
    }

    // Menampilkan hasil
    std::cout << " = " << sum_genap << std::endl;

    return 0;
}