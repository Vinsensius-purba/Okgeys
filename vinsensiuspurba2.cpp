#include <iostream>
using namespace std;

int main(){
    const int numSalesmen = 10;
    double Sales[numSalesmen];
    double commission[numSalesmen];
    double totalcommission = 0.0;
    
    // Input penjual untuk masing-masing salesman
    for (int i =0; i < numsalesmen; i++){
        cout<< "Masuk jumlah penjualan salesman ke-" << (i+1)<<":";
        cin>>sales[i];
        
        //Hitung komisi
        if (sales[i] <= 500000){
             commission[i]= sales[i]*0.10; //10% untuk penjualan <= 500000
        }else{
              commission[i]=(500000*0.10) + ((sales[i]-500000)*0.15);//10%untuk 500000 pertama, 15% untuk sisanya
        }
        totalcommission += commission[i];//Tambahkan ke total komisi
   }
   
   // Tampilkan hasil
   cout << "\nKomisi yang diterima oleh setiap salesman:\n";
   for (int i = 0; i < numSalesmen;i++){
       cout << "Salesman ke-"<< (i+1)<<":Rp" << commission[i]<<endl;
   }
   cout<<"Total komisi yang dibayarkan oleh PT. MURAH HATI: Rp" << totalcommission <<endl;
   
   return 0;
}
