#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct Mahasiswa {
    string nama;
    string npm;
    double nilaiMid;
    double nilaiSemester;
    double nilaiAkhir;
    char nilaiHuruf;
};

int main() {
    Mahasiswa mhs[100];
    int jumlahMhs;

    cout << "Masukkan jumlah mahasiswa (maksimal 100): ";
    cin >> jumlahMhs;

    for (int i = 0; i < jumlahMhs; i++) {
        cout << "\nMahasiswa ke-" << i+1 << endl;
        cout << "Nama: ";
        cin.ignore(); // Untuk membersihkan buffer
        getline(cin, mhs[i].nama);
        cout << "NPM: ";
        cin >> mhs[i].npm;
        cout << "Nilai Tengah: ";
        cin >> mhs[i].nilaiMid;
        cout << "Nilai Semester: ";
cin >> mhs[i].nilaiSemester;

        // Hitung nilai akhir
        mhs[i].nilaiAkhir = 0.4 * mhs[i].nilaiMid + 0.6 * mhs[i].nilaiSemester;

        // Tentukan nilai huruf
        if (mhs[i].nilaiAkhir >= 80) {
            mhs[i].nilaiHuruf = 'A';
        } else if (mhs[i].nilaiAkhir >= 70) {
            mhs[i].nilaiHuruf = 'B';
        } else if (mhs[i].nilaiAkhir >= 60) {
            mhs[i].nilaiHuruf = 'C';
        } else if (mhs[i].nilaiAkhir >= 50) {
            mhs[i].nilaiHuruf = 'D';
        } else {
            mhs[i].nilaiHuruf = 'E';
        }
    }

    // Tampilkan hasil
    cout << "\nData Nilai Mahasiswa\n";
    cout << "---------------------\n";
    cout << "Nama\t\tNPM\tNilai Akhir\tNilai Huruf\n";
    for (int i = 0; i < jumlahMhs; i++) {
        cout << mhs[i].nama << "\t" << mhs[i].npm << "\t\t" << mhs[i].nilaiAkhir << "\t\t" << mhs[i].nilaiHuruf << endl;
    }

    return 0;
}
