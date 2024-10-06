#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct Barang{
       string nama;
       double harga;
       int jumlah;
       double total;
};

int main(){
    const int maksBarang = 100;//Batas maksimal barang yang bisa diinput
    Barang barang[maksBarang];
    int jumlahBarang =0;
    char lagi;
    
    do{
      cout<<"Harga per barang:";
      getline(cin,barang[jumlahBarang].nama);
      
      cout<<"Harga per barang:Rp";
      cin>>barang[jumlahBarang].harga;
      
      cout<<"Jumlah barang terjual:";
      cin>>baraang[jumlahBarang].julah;
      
      barang[jumlahBarang].total = barang[jumlahBarang].harga*barang[jumlahBarang].jumlah;
      
        jumlahBarang++;
        
        cout<<"Apakah ingin menambah data penjualan lagi?(y/n):";
        cin>>lagi;
        }while(lagi=='y'|| lagi=='Y');
        
        //Tampilkan laporan
        cout<<"\n==================================\n";
        cout<<"Laporan Penjualan \n";
        cout<<"====================================\n";
        cout<<setw(5)<<"No"<<setw(20)<<"Nama Barang"<<setw(15)<<"Harga/Unit"<<setw(15)<<"Jumlah"<<Setw(20)<<"Total Pendapatan\n";
        cout<<"-------------------------------------\n";
        
        double totalPendapatanSemua=0;
        for(int i=0;i<jumlahBarang;i++)
        {
             cout<<setw(5)<<i+1<<setw(20)<<barang[i].nama<<setw(15)<<fixed<<setprecision(2)<<barang[i].harga<<setw(15)<<barang[i].jumlah<<setw(20)<<fixed<<setprecision(2)<<barang[i].total<<endl;
              totalPendapatanSemua+=brang[i].total;
              }
              
              cout<<"------------------------------\n";
              cout<< "Total Pendapatan Semua Barang: Rp"<<fixed<<setprecision(2)<<totalPendapatanSemua<<endl;
              cout<<"===================================\n";
              
              return 0;
}
