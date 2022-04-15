//================================================
//Nama		: Muhammad Firdaus
//Nim		: 2109106052
//Kelas		: Informatika A'21
//Program	: Program Pendataan Obat Di Apotek
//Tugas		: Posttest 4
//================================================
//Note: cara pemanggilan struct dengan cara variable_struct.nama_field;

#include <iostream>
using namespace std;

struct data{
	char nama[30], jenis[30], harga [30];
};	
data batas[100];
int a,b,c,d;

void inputdata(){ //fungsi void inputdata yang berisikan program input data yang berisikan jenis, nama, dan harga dari obat
cout << "===================================";   
cout<<"\n Jumlah Data yang akan diinput : ";
cin>>b;
cout << "==================================="; 
   d=0;
   for(c=0;c<b;c++){
   d=d+1;
   cout<<"\nData ke-"<<d<<endl;
   cout<<"Jenis Obat\t: ";
   cin>>batas[a].jenis;
   cout<<"Nama Obat\t: ";
   cin>>batas[a].nama;
   cout<<"Harga\t\t: ";
   cin>>batas[a].harga;
   a++;}
	cout<< "\n===Data Telah Ditambahkan===";   
	cout << "\n===================================";}
   

   
void hapusdata() //fungsi void hapusdata yang berisikan program hapus data yang ingin dihapus
{int x,y;
 cout << "\n===================================";
 cout<<"\nHapus data ke-";cin>>x;
  cout << "\n===================================";
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {batas[i]=batas[i+1];}
 cout<<"\n+++++++ Data ke-"<<x<<" Berhasil Terhapus +++++++";
  cout << "\n===================================";}
 
 void lihatdata(){ //fungsi void lihatdata yang akan menampilkan data yang telah diinput ke dalam tabel
 int i,j;
 cout<<"\n================================Menampilkan Data===========================================\n\n";
 cout<<"=============================================================================================\n";
 cout<<"||\tNO\t||\tJenis Obat\t||\tNama Obat\t\t||\tHarga\t||\n";
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
  cout<<"============================================================================================\n";
  cout<<"||\t"<<j<<"\t||";
  cout<<batas[i].jenis<<"\t\t||";
  cout<<batas[i].nama<<"\t\t||";
  cout<<batas[i].harga<<"\t\t||";cout<<endl;
  }
	cout<<"============================================================================================ ";}

void editdata(){ //fungsi void editdata yang mana program ini menanyakan data mana yang akan di ubah dan menginput ulang jenis, nama, dan harga obat
int k,l;
	cout<<"\nMasukan Data yang akan diedit : ";
	cin>>k;
	l=k-1;
	cout<<"Jenis Obat\t: ";
	cin>>batas[l].jenis;
	cout<<"Nama Obat\t: ";
	cin>>batas[l].nama;
	cout<<"Harga Obat\t: ";
	cin>>batas[l].harga;
	cout<<"\n===Data telah diganti===";}
   
int main() //disini berisikan perulangan dan tempat pilihan menu, goto awal disini berfungsi agar 
{int pilih;
 char w;
 cout<<"=============================================================================";
 cout<<"\n=============================PROGRAM DATA OBAT===============================";
 cout<<"\n=============================================================================";
 awal:
  cout<<"\n\n=== PILIHAN MENU ===";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Hapus Data";
  cout<<"\n3. Lihat Data";
  cout<<"\n4. Edit Data";
  cout<<"\n5. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {inputdata();goto awal;}
  if(pilih==2)
   {hapusdata();goto awal;}
  if(pilih==3)
   {lihatdata();goto awal;}
  if(pilih==4)
   {editdata();goto awal;}
  if(pilih==5)
	cout << "TERIMA KASIH TELAH MENGGUNAKAN PROGRAM";
}
