#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaSiswa;
    double nilaiKeaktifan, nilaiTugas, nilaiUjian;

    // Input nilai dari pengguna
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Siswa: ";
    getline(cin, namaSiswa);
    cout << "Nilai Keaktifan: ";
    cin >> nilaiKeaktifan;
    cout << "Nilai Tugas: ";
    cin >> nilaiTugas;
    cout << "Nilai Ujian: ";
    cin >> nilaiUjian;

    // Proses perhitungan nilai murni dan nilai akhir
    double nilaiMurniKeaktifan = nilaiKeaktifan * 0.20;
    double nilaiMurniTugas = nilaiTugas * 0.30;
    double nilaiMurniUjian = nilaiUjian * 0.50;
    double nilaiAkhir = nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;

    // Menentukan grade
    char grade;
    if (nilaiAkhir > 80)
        grade = 'A';
    else if (nilaiAkhir > 70)
        grade = 'B';
    else if (nilaiAkhir > 56)
        grade = 'C';
    else if (nilaiAkhir > 46)
        grade = 'D';
    else
        grade = 'E';

    // Output hasil
    cout << endl << "Layar Keluaran" << endl;
    cout << "Siswa yang bernama " << namaSiswa << " dengan nilai persentasi yang dihasilkan: " << endl;
    cout << "Nilai Keaktifan * 20%: " << nilaiMurniKeaktifan << endl;
    cout << "Nilai Tugas * 30%: " << nilaiMurniTugas << endl;
    cout << "Nilai Ujian * 50%: " << nilaiMurniUjian << endl;
    cout << "Jadi, siswa yang bernama " << namaSiswa << " memperoleh nilai akhir sebesar " << nilaiAkhir << " dengan grade " << grade << endl;

    return 0;
}