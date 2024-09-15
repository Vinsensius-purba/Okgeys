#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    char tipeRumah, JenisPembayaran;
    int hrgTunai, angsuranPerBulan;
    
    // input tipe rumah dan jenis pembayaran
    cout << "Masukkan Tipe Rumah (A/B/C/D):";
    cin >> TipeRumah;
    cout<< "Masukkan Jenis Pembayaran (T = Tunai, K = Kredit):";
    cin >>JenisPembayaran;
    
    //Tentukan harga sesuai tipe rumah
    if (tiperumah == 'A'){
        hrgTunai = 50000000;
        angsuranPerBulan = 500000;
    }else if(tipeRumah == 'B'){
          hrgTunai = 75000000;
          angsuranPerBulan = 750000;
    }else if (tipeRumah == 'C'){
          hrgTunai = 85000000;
          angsuranPerBulan = 850000;
    }else if (tiperumah =='D'){
          hrgTunai = 100000000;
          angsuranPerBulan = 1000000;
    }else{
       cout<< "Tipe rumah tidak valid." << endl;
       return 1;
    }
}
