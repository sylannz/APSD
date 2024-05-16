#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaSiswa;
    float nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3;

    // Input
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "Nama Siswa: ";
    getline(cin, namaSiswa);
    cout << "Nilai Pertandingan I: ";
    cin >> nilaiPertandingan1;
    cout << "Nilai Pertandingan II: ";
    cin >> nilaiPertandingan2;
    cout << "Nilai Pertandingan III: ";
    cin >> nilaiPertandingan3;

    // Hitung rata-rata
    float nilaiRataRata = (nilaiPertandingan1 + nilaiPertandingan2 + nilaiPertandingan3) / 3.0;

    // Tentukan peringkat juara
    string juara;
    if (nilaiRataRata > 80) {
        juara = "I";
    } else if (nilaiRataRata > 75) {
        juara = "II";
    } else if (nilaiRataRata > 65) {
        juara = "III";
    } else {
        juara = "tidak juara";
    }

    // Output
    cout << "\nLayar Keluaran" << endl;
    cout << "Siswa yang bernama " << namaSiswa << endl;
    cout << "Memperoleh nilai rata-rata " << nilaiRataRata << " dan menjadi juara ke-" << juara << " dari hasil perlombaan yang diikutinya." << endl;

    return 0;
}