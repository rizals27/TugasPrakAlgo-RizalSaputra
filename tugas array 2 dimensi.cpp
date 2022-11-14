#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    char pilihanMenu,*menuMinuman,beliLgi;
    int ttlBayar,Kembalian,jmlPembelian,hargaMenu,totalHarga;
    atas:
    cout<< "\Program Sederhana Penjualan Minuman"<<endl;
    cout<< "Pilihan Menu Minuman"<<endl;
    cout<< "1. Teh tarik"<<endl;
    cout<< "2. Susu coklat"<<endl;
    cout<< "3. Teh talua"<<endl;
    cout<< "4. kopi"<<endl;
    cout<< "5. Pop ice"<<endl;
    cout<<" Menu Minuman [1-5]:";cin>>pilihanMenu;
    cout<< "Jumlah Pembelian Minuman:";cin>>jmlPembelian;

    if(pilihanMenu=='1'){menuMinuman="Teh tarik";
    hargaMenu=8000;}
    else if(pilihanMenu=='2'){menuMinuman="Susu coklat";
    hargaMenu=6000;}
    else if(pilihanMenu=='3'){menuMinuman="teh talua";
    hargaMenu=1200;}
    else if(pilihanMenu=='4'){menuMinuman="kopi";
    hargaMenu=4000;}
    else if(pilihanMenu=='5'){menuMinuman="pop ice";
    hargaMenu=5000;}
    else {
        cout<<"Maaf Minuman Tidak Tersedia Dikedain Kami"<<endl;
        cout<<"Menu Minuman     : "<<menuMinuman<<endl;
    }
    ttlBayar=hargaMenu*jmlPembelian;
    cout<<"Menu Minuman     :"<<menuMinuman<<endl;
    cout<<"Harga satuan     : Rp."<<hargaMenu<<endl;
    cout<<"jumlah Pembelian : "<<jmlPembelian<<endl;
    cout<<"Total Harga      : Rp."<<totalHarga<<endl;

    cout<<"==================================================="<<endl;
 cout<<"Total Bayar    : Rp. ";
 cin>>ttlBayar;
 Kembalian=ttlBayar-totalHarga;
 cout<<"Kembalian      : Rp. "<<Kembalian<<endl<<endl;
 cout<<"===================================================="<<endl;
 cout<<"Beli kembali Menu? [Y/T] : ";cin>>beliLgi;
 cout<<endl;
  if(beliLgi=='Y'||beliLgi=='y')
  {goto atas;}
  else{
   cout<<"Terima Kasih Atas Pembelian Produk Kami";
   cout<<endl;
  }
getch();
}




