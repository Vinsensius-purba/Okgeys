#include <iostream>
#include <conio.h>

using namespace std;

// Fungsi untuk menghitung gaji pokok
int hitungGajiPokok(int jamKerja) {
    return jamKerja * 2000;
}

// Fungsi untuk menghitung uang lembur
int hitungUangLembur(int jamKerja) {
    if (jamKerja > 7) {
        return (jamKerja - 7) * 3000;
    }
    return 0;
}

// Fungsi untuk menghitung uang makan
int hitungUangMakan(int jamKerja) {
    if (jamKerja >= 8 && jamKerja < 10) {
        return 1500;
    } else if (jamKerja >= 10) {
        return 2500;
    }
    return 0;
}

// Fungsi untuk menghitung jasa lembur
int hitungJasaLembur(int jamKerja) {
    if (jamKerja >= 9) {
        return 3000;
    }
    return 0;
}

// Fungsi utama
int main() {
    int jamKerja;
    cout << "Masukkan jumlah jam kerja karyawan: ";
    cin >> jamKerja;

    int gajiPokok = hitungGajiPokok(jamKerja);
    int uangLembur = hitungUangLembur(jamKerja);
    int uangMakan = hitungUangMakan(jamKerja);
    int jasaLembur = hitungJasaLembur(jamKerja);

    int totalGaji = gajiPokok + uangLembur + uangMakan + jasaLembur;

    cout << "Gaji Pokok   : " << gajiPokok << endl;
    cout << "Uang Lembur  : " << uangLembur << endl;
    cout << "Uang Makan   : " << uangMakan << endl;
    cout << "Jasa Lembur  : " << jasaLembur << endl;
    cout << "Total Gaji   : " << totalGaji << endl;

    return 0;
}

