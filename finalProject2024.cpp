#include <iostream> 
#include <conio.h> 
#include <string.h> 
#include <dos.h> 
#include <fstream>
#include <iomanip> 
#include <cstdlib> 

using namespace std; 

struct PenjualanHandphone 
{
    int noFaktur;
    char tanggalJual[20], merek[30], jenis[20], warna[20], ukuran[10], memori[10];
    int hargaJual, jumlahBeli, totalPembayaran;
} handphone[100];

int jumlahData = -1;

// Fungsi untuk menambah data penjualan handphone
void tambahData() {
    system("cls");
    jumlahData++;
    cout << "\nTambah Data Penjualan Handphone:\n"; 
    cout << "----------------------------------\n";
    cout << " No. Faktur: ";
    cin >> handphone[jumlahData].noFaktur;
    cin.ignore();
    cout << " Tanggal Jual: ";
    cin.getline(handphone[jumlahData].tanggalJual, 20);
    cout << " Merek: ";
    cin.getline(handphone[jumlahData].merek, 30);
    cout << " Jenis: ";
    cin.getline(handphone[jumlahData].jenis, 20);
    cout << " Warna: ";
    cin.getline(handphone[jumlahData].warna, 20);
    cout << " Ukuran: ";
    cin.getline(handphone[jumlahData].ukuran, 10);
    cout << " Memori: ";
    cin.getline(handphone[jumlahData].memori, 10);
    cout << " Harga Jual: ";
    cin >> handphone[jumlahData].hargaJual;
    cout << " Jumlah Beli: ";
    cin >> handphone[jumlahData].jumlahBeli;
    handphone[jumlahData].totalPembayaran = handphone[jumlahData].hargaJual * handphone[jumlahData].jumlahBeli;
    cout << "\nData berhasil ditambahkan!\n";
    system("pause");
}

// Fungsi untuk mengedit data penjualan handphone
void editData() {
    system("cls");
    int noFaktur, index = -1;
    cout << "\nEdit Data Penjualan Handphone:\n"; 
    cout << "----------------------------------\n";
    cout << " Masukkan No. Faktur yang akan diedit: ";
    cin >> noFaktur;
    for (int i = 0; i <= jumlahData; i++) {
        if (handphone[i].noFaktur == noFaktur) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        cout << " Data ditemukan. Masukkan data baru:\n";
        cout << " No. Faktur: ";
        cin >> handphone[index].noFaktur;
        cin.ignore();
        cout << " Tanggal Jual: ";
        cin.getline(handphone[index].tanggalJual, 20);
        cout << " Merek: ";
        cin.getline(handphone[index].merek, 30);
        cout << " Jenis: ";
        cin.getline(handphone[index].jenis, 20);
        cout << " Warna: ";
        cin.getline(handphone[index].warna, 20);
        cout << " Ukuran: ";
        cin.getline(handphone[index].ukuran, 10);
        cout << " Memori: ";
        cin.getline(handphone[index].memori, 10);
        cout << " Harga Jual: ";
        cin >> handphone[index].hargaJual;
        cout << " Jumlah Beli: ";
        cin >> handphone[index].jumlahBeli;
        handphone[index].totalPembayaran = handphone[index].hargaJual * handphone[index].jumlahBeli;
        cout << "\nData berhasil diupdate!\n";
    } else {
        cout << "\nData tidak ditemukan!\n";
    }
    system("pause");
}

// Fungsi untuk menghapus data penjualan handphone
void hapusData() {
    system("cls");
    int noFaktur, index = -1;
    cout << "\nHapus Data Penjualan Handphone:\n"; 
    cout << "----------------------------------\n";
    cout << " Masukkan No. Faktur yang akan dihapus: ";
    cin >> noFaktur;
    for (int i = 0; i <= jumlahData; i++) {
        if (handphone[i].noFaktur == noFaktur) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        for (int i = index; i < jumlahData; i++) {
            handphone[i] = handphone[i + 1];
        }
        jumlahData--;
        cout << "\nData berhasil dihapus!\n";
    } else {
        cout << "\nData tidak ditemukan!\n";
    }
    system("pause");
}

// Fungsi untuk melihat data penjualan handphone
void lihatData() {
    system("cls");
    cout << "\nLihat Data Penjualan Handphone:\n"; 
    cout << "------------------------------------------------------------------------------\n";
    cout << left << setw(12) << "No. Faktur"
         << setw(15) << "Tanggal Jual"
         << setw(15) << "Merek"
         << setw(10) << "Jenis"
         << setw(10) << "Warna"
         << setw(20) << "Total Pembayaran" << endl;
    cout << "------------------------------------------------------------------------------\n";
    for (int i = 0; i <= jumlahData; i++) {
        cout << left << setw(12) << handphone[i].noFaktur
             << setw(15) << handphone[i].tanggalJual
             << setw(15) << handphone[i].merek
             << setw(10) << handphone[i].jenis
             << setw(10) << handphone[i].warna
             << setw(20) << handphone[i].totalPembayaran << endl;
    }
    system("pause");
}

// Fungsi untuk mencetak data penjualan handphone
void cetakData() {
    system("cls");
    cout << "\nCetak Data Penjualan Handphone ke File:\n"; 
    cout << "----------------------------------\n";

    ofstream file("PenjualanHandphone.doc"); // Membuat file dengan ekstensi .doc
    if (!file.is_open()) {
        cout << "Gagal membuka file untuk menulis data!\n";
        system("pause");
        return;
    }

    file << "\t\t\t==== Data Penjualan Handphone ====\n\n";
    for (int i = 0; i <= jumlahData; i++) {
        file << "No. Faktur        : " << handphone[i].noFaktur << "\n";
        file << "Tanggal Jual      : " << handphone[i].tanggalJual << "\n";
        file << "Merek             : " << handphone[i].merek << "\n";
        file << "Jenis             : " << handphone[i].jenis << "\n";
        file << "Warna             : " << handphone[i].warna << "\n";
        file << "Ukuran            : " << handphone[i].ukuran << "\n";
        file << "Memori            : " << handphone[i].memori << "\n";
        file << "Harga Jual        : " << handphone[i].hargaJual << "\n";
        file << "Jumlah Beli       : " << handphone[i].jumlahBeli << "\n";
        file << "Total Pembayaran  : " << handphone[i].totalPembayaran << "\n";
        file << "----------------------------------\n";
    }

    file.close(); // Menutup file
    cout << "Data berhasil dicetak ke file PenjualanHandphone.doc\n";
    system("pause");
}

int main() {
	
	//membuat username dan password
	login:
    system("cls");
    string user = "";
    string pass = "";
    char ch;

    cout << "\n\n\n\n";
    cout << "\n\t\t\t\t\t    !*KELOMPOK 3*!\n";
    cout << "\t\t\t+=====================================================+\n";
    cout << "\t\t\t|       !====== PENJUALAN TOKO HANDPHONE ======!      |\n";
    cout << "\t\t\t+=====================================================+\n";
    cout << "\t\t\t|                                                     |\n";
    cout << "\t\t\t|   Username : "; 							
    cin >> user;                                                         
    cout << "\t\t\t|   Password : ";

    // Agar tidak terjadi input di baris Password ketika ingin Menghapusnya
    while ((ch = _getch()) != 13) { 
        if (ch == '\b') { // Fungsi Backspace
            if (!pass.empty()) {
                pass.pop_back();
                cout << "\b \b "; // Menghapus karakter terakhir di layar
            }
        } else {
            pass.push_back(ch);
            cout << '*';
        }
    }
    cout << endl;
    cout << "\t\t\t|                                                     |\n";
    cout << "\t\t\t+=====================================================+\n";

	
    if (user == "dani" && pass == "dani") { // Username dan Password
        cout << "\n\t\t\tAnda berhasil login.\n\n";
        system("pause");
        system("cls");
    } else {
        cout << "\n\t\t\tPassword Anda Salah!\n\n";
        system("pause");
        system("cls");
        goto login;
    }
	//end membuat username dan password
	
    int pilihan;
    do {
        system("cls"); // Menu Pilihan CRUD
        cout << "==== Aplikasi Penjualan Handphone ====" << endl;
        cout << "1. Tambah Data Penjualan Handphone\n";
        cout << "2. Edit Data Penjualan Handphone\n";
        cout << "3. Hapus Data Penjualan Handphone\n";
        cout << "4. Lihat Data Penjualan Handphone\n";
        cout << "5. Cetak Data Penjualan Handphone\n";
        cout << "6. Keluar\n";
        cout << "Masukkan Pilihan Anda [1-6]: ";
        cin >> pilihan;
        switch (pilihan) {
            case 1: // Tambah Data
                tambahData();
                break;
            case 2: // Edit Data
                editData();
                break;
            case 3: // Hapus Data
                hapusData();
                break;
            case 4: // Lihat Data
                lihatData();
                break;
            case 5: // Cetak Data
                cetakData();
                break;
            case 6: // Keluar / Logout Akun
                cout << "\n'Terima kasih telah menggunakan aplikasi ini!'\n";
                break;
            default: // Apabila Memasukkan Pilihan < 0 atau > 6
                cout << "\n'Pilihan tidak valid!'\n";
                system("pause");
        }
    } while (pilihan != 6);
    return 0;
}

														//	*C : ByVinsen* //
