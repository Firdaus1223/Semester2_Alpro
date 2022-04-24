//================================================
//Nama		: Muhammad Firdaus
//Nim		: 2109106052
//Kelas		: Informatika A'21
//Program	: Program Pendataan Obat Di Apotek
//Tugas		: Posttest 4
//================================================
//Note: cara pemanggilan struct dengan cara variable_struct.nama_field;

#include <iostream>
#include <conio.h>
#include <string>
#include<stdlib.h>
using namespace std;

struct Batas{
	string nama; 
	string jenis; 
	int harga;
	
};	
int jumlahdata;
Batas batas[100];
int a,b,c,d;

void swap(Batas* a, Batas* b)
{
Batas temp = *a;
*a = *b;
*b = temp;
}

int partition_askending (Batas batas[], int low, int high)
{
	int pivot = batas[high].harga;
	int i = (low - 1);
	for (int j = low; j <= high- 1; j++)
	{
		if (batas[j].harga <= pivot)
		{
			i++;
			swap(&batas[i], &batas[j]);
		}
	}
	swap(&batas[i + 1], &batas[high]);
	return (i + 1);
}


int partition_diskending (Batas batas[], int low, int high)
{
	int pivot = batas[high].harga;
	int i = (low - 1);
	for (int j = low; j <= high- 1; j++)
	{
		if (batas[j].harga >= pivot)
		{
		i++;
		swap(&batas[i], &batas[j]);
		}
	}
	swap(&batas[i + 1], &batas[high]);
	return (i + 1);
}


   

void bubbleSort(Batas batas[], int jumlahdata)
{ 
int j, milih;
Batas swap;
	cout << "1. Ascending" << endl
		<< "2. Descending" << endl
		<< "Pengurutan berdasarkan: "; cin >> milih;
   switch(milih){
        case 1:
			for (int i=0; i<jumlahdata-1; i++){
				for(j=0; j<jumlahdata-1; j++){
					if(batas[j].nama>batas[j+1].nama){
						swap = batas[j];
						batas[j] = batas[j+1];
						batas[j+1] = swap;
					}
				}	
			}
			break;
			
		case 2:
			for (int i=0; i<jumlahdata-1; i++){
				for(j=0; j<jumlahdata-1; j++){
					if(batas[j].nama>batas[j+1].nama){
						swap = batas[j];
						batas[j] = batas[j+1];
						batas[j+1] = swap;
					}
				}	
			}
			break;
}
}


void selectionSort(Batas batas[], int jumlahdata){ 
    int i, j, Min;
    int milih;
   	    cout<<"\n Tampilkan Dengan Urutan : \n"<<endl
		<<" 1. Ascending (Menaik)\n"<<endl
		<<" 2. Decending (Menurun)\n"<<endl
		<<"Masukan pilihan : ";cin>>milih;
		
    switch(milih){            
	for (i = 0; i < jumlahdata-1; i++){ 
    Min = i;  
	for (j = i+1; j < jumlahdata; j++){
        case 1:
               
 					if (batas[j].jenis < batas[Min].jenis)
					{
						Min = j;	
					}
            break;
        case 2:
                    if (batas[j].jenis > batas[Min].jenis){
                        Min = j; 
                    }
                    swap(&batas[Min], &batas[i]); 
                }  
				break;
				swap(&batas[i], &batas[Min]);
    			}
            }
          
} 

void quickSort_askending(Batas batas[], int low, int high)
{
	if (low < high)
	{
		int pi = partition_askending(batas, low, high);
		quickSort_askending(batas, low, pi - 1);
		quickSort_askending(batas, pi + 1, high);
	}
}

void quickSort_deskending(Batas batas[], int low, int high)
{
if (low < high)
{
int pi = partition_diskending(batas, low, high);
quickSort_deskending(batas, low, pi - 1);
quickSort_deskending(batas, pi + 1, high);
}
}

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
	

void sort_menu(){
	system("cls");
	int pilih, urutan;
	{
		cout << "=============================	" << endl
	 	<< 	 "Tampilan Berdasarkan Sorting		" << endl
	   	<<   "=============================		" << endl
	 	<<   "[1] Nana					" << endl
	 	<<   "[2] Jenis 							" << endl
	 	<<   "[3] Harga					" << endl;
		cout << endl;
		cout << "Masukkan pilihan: "; cin >> pilih;
		system("cls");
		if (pilih==1){
			cout << "1. Ascending" << endl
				<< "2. Descending" << endl
				<< "Pengurutan berdasarkan: "; cin >> urutan;
				switch (urutan){
					case 1:
						quickSort_askending(batas, 0, jumlahdata-1 );
						lihatdata();
						break;
					case 2:
						quickSort_deskending(batas, 0, jumlahdata-1 );
						lihatdata();
						break;
				}
		}
				else if (pilih==2){
					bubbleSort(batas, jumlahdata);	
					lihatdata();
				}	
				else if (pilih==3){
					selectionSort(batas, jumlahdata);
					lihatdata();
				}	
				else{
					cout << "Pilihan tidak ada\n"; getch();
		}
	}
}


   
int main() 
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
   {sort_menu();goto awal;}
  if(pilih==4)
   {editdata();goto awal;}
  if(pilih==5)
	cout << "TERIMA KASIH TELAH MENGGUNAKAN PROGRAM";
}


