#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variabel untuk menyimpan data karyawan
    string namaKaryawan, pendidikan;
    int golonganJabatan, jamKerja;

    // Konstanta untuk tunjangan jabatan dan pendidikan
    const double tunjanganJabatan[] = {0.05, 0.10, 0.15};
    const double tunjanganPendidikan[] = {0.025, 0.05, 0.20, 0.30};
    const double honorLemburPerJam = 3500;
    const double gajiPokok = 300000;

    // Input data karyawan
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Karyawan : ";
    getline(cin, namaKaryawan);
    cout << "Golongan Jabatan (1-3): ";
    cin >> golonganJabatan;
    cout << "Pendidikan (SMA, D1, D3, S1): ";
    cin >> pendidikan;
    cout << "Jumlah jam kerja : ";
    cin >> jamKerja;

    // Menghitung tunjangan jabatan
    double tunjanganJabatanValue = tunjanganJabatan[golonganJabatan - 1] * gajiPokok;

    // Menghitung tunjangan pendidikan
    double tunjanganPendidikanValue = 0;
    if (pendidikan == "SMA")
        tunjanganPendidikanValue = tunjanganPendidikan[0] * gajiPokok;
    else if (pendidikan == "D1")
        tunjanganPendidikanValue = tunjanganPendidikan[1] * gajiPokok;
    else if (pendidikan == "D3")
        tunjanganPendidikanValue = tunjanganPendidikan[2] * gajiPokok;
    else if (pendidikan == "S1" && golonganJabatan == 3)
        tunjanganPendidikanValue = tunjanganPendidikan[3] * gajiPokok;

    // Menghitung honor lembur
    double honorLemburValue = 0;
    if (jamKerja > 8)
        honorLemburValue = (jamKerja - 8) * honorLemburPerJam;

    // Menghitung total gaji
    double totalGaji = gajiPokok + tunjanganJabatanValue + tunjanganPendidikanValue + honorLemburValue;

    // Output hasil perhitungan
    cout << "\nLayar Keluaran" << endl;
    cout << "Karyawan yang bernama " << namaKaryawan << endl;
    cout << "Tunjangan Jabatan Rp " << tunjanganJabatanValue << endl;
    cout << "Tunjangan Pendidikan Rp " << tunjanganPendidikanValue << endl;
    cout << "Honor Lembur Rp " << honorLemburValue << endl;
    cout << "Total gaji Rp " << totalGaji << endl;

    return 0;
}