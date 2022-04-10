//Nama: Muhammad Firdaus
//Nim: 2109106052
//Kelas: Informatika A'21
//Posttest 4
//Program CURD Data Obat

//Variabel
//conio.h untuk memanggil console DOS I/O (input output). Fungsi getch() (get character and echo)
//system(“CLS”) agar program dapat menutup tanpa menghentikan semua tindakan
//GOTO berfungsi untuk memerintahkan CPU melompat ke baris manapun berdasarkan label yang telah dibuat.
//getch agar saat menambahkan nama obat dapat menggunakan spasi

#include<conio.h>
#include <iostream>
using namespace std;


struct data{//deklarasi data yang berisikan jenis,nama,harga, dan array yang berjumlah 100
char jenis[20],nama[20],harga[20];};
data batas[100];
int a,b,c,d;

void inputdata()//menggunakan void yang berisikan program untuk menginput data dan menggunakan system("Cls") agar program kembali ke tampilan menu
{    cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
   d=0;
   for(c=0;c<b;c++){
   d=d+1;
   cout<<"\nData ke-"<<d<<endl;
   cout<<"Jenis Obat\t: ";cin>>batas[a].jenis;
   cout<<"Nama Obat\t: ";cin>>batas[a].nama;
   cout<<"Harga\t\t: ";cin>>batas[a].harga;
   a++;}system("cls");}



void lihatdata()//program untuk menampilkan data yang berada dalam tabel yang dibuat secara manual
{int i,j;
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
  cout<<"============================================================================================ ";
   cout<<"\n Note: Tekan Enter Untuk Kembali";getch();system("cls");}
  

void hapusdata()//memberikan perintah data berapa yang akan dihapuskan dan mengatur agar nomor data dapat berubah kembali
{int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {batas[i]=batas[i+1];}
 system("cls");
 cout<<"\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-"<<x<<" Terhapus ++++++++++++++++++++++++++++++";
 getch();system("cls");
}

void editdata(){//memberikan perintah data berapa yang akan diganti dan mengatur agar nomor data dapat berubah kembali 
int k,l;
cout<<"Masukan Data yang akan diedit : ";cin>>k;
l=k-1;
cout<<"Jenis Obat\t: ";cin>>batas[l].jenis;
cout<<"Nama Obat\t: ";cin>>batas[l].nama;
cout<<"Harga Obat\t: ";cin>>batas[l].harga;
lihatdata();//agar setelah mengedit data maka akan menampilkan kembali data yang telah diubah
}

int main()
{     int pilih;
 char w;
 cout<<"=============================================================================";
 cout<<"\n=============================PROGRAM DATA OBAT=============================";
 cout<<"\n===========================================================================";
  cout<<"\n Note: Tekan enter untuk masuk ke pilihan Menu";
 getch();system("cls");;
  awal:
  cout<<"\n================================ PILIHAN MENU ================================";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Hapus Data";
  cout<<"\n3. Lihat Data";
  cout<<"\n4. Edit Data";
  cout<<"\n5. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {system("cls");inputdata();goto awal;}
  if(pilih==2)
   {system("cls");hapusdata();goto awal;}
  if(pilih==3)
   {system("cls");lihatdata();}
  if(pilih==4)
   {system("cls");editdata();goto awal;}
  if(pilih==5)
   {system("cls");
	cout << "TERIMA KASIH TELAH MENGGUNAKAN PROGRAM";
}
}



