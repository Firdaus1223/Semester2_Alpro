//================================================
//Nama		: Muhammad Firdaus
//Nim		: 2109106052
//Kelas		: Informatika A'21
//Program	: Program Pendataan Obat Di Apotek
//Tugas		: Posttest 6
//================================================
//Note: cara pemanggilan struct dengan cara variable_struct.nama_field;

#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Batas{
	string nama;
	string jenis; 
	int harga;
	
};	
int jumlahdata;
Batas batas[100];
int a,b,c,d;

void swap(Batas* a, Batas* b)//rumus tukar di menu sorting
{
Batas temp = *a;
*a = *b;
*b = temp;
}

int partition_askending (Batas batas[], int low, int high)//rumus pivot atau titik tengah askending
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


int partition_diskending (Batas batas[], int low, int high)//rumus pivot atau titik tengah deskending
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

int binarySearch(int pilih)//rumus dari binary search
{
    string num;
	int beg = 0;
	int end=jumlahdata-1;
	int index= -1;
	cout<<"Data yang dicari: ";
	cin>>num;
	d=0;
   for(c=0;c<b;c++){
   d=d+1;
	switch (pilih){
		case 1:
			for (int i=0; i<jumlahdata-1; i++){
				for(int j=0; j<jumlahdata-1; j++){
					if(batas[j].nama>batas[j+1].nama){
						Batas swap = batas[j];
						batas[j] = batas[j+1];
						batas[j+1] = swap;
					}
				}	
			}
			while(beg<=end){
				int mid=(end+beg)/2;
				if(batas[mid].nama==num){
					index= mid +1;
					for (int i=0; i<jumlahdata; i++){
						if (batas[mid].nama==batas[i].nama){
							cout<<"\nData ke-"<<d<<endl
							<< "\nNama Obat      			" << ": "<< batas[i].nama
							<< "\nJenis Obat			" << ": "<< batas[i].jenis
							<< "\nHarga     			" << ": "<< batas[i].harga<<"\n";
						}
						getch();
					}
					break;
				}
				else{
					if(num>batas[mid].nama){
						beg= mid+1;
					}
					else{
						end=mid-1;
					}
				}
			}
			break;
			
		case 2:
			for (int i = 0; i < jumlahdata-1; i++)
			{
				int min_idx = i;
				for (int j = i+1; j < jumlahdata; j++)
				{

					if (batas[j].jenis < batas[min_idx].jenis)
					{
						min_idx = j;	
					}
				}
				swap(&batas[i], &batas[min_idx]);
			}
			while(beg<=end){
				int mid=(end+beg)/2;
				if(batas[mid].jenis==num){
					index= mid +1;
					for (int i=0; i<jumlahdata; i++){
						if (batas[mid].jenis==batas[i].jenis){
							cout<<"\nData ke-"<<d<<endl
							<< "\nNama Obat      			" << ": "<< batas[i].nama
							<< "\nJenis Obat			" << ": "<< batas[i].jenis
							<< "\nHarga     			" << ": "<< batas[i].harga<<"\n";
						}
						getch();
					}
					break;
				}
				else{
					if(num>batas[mid].jenis){
						beg= mid+1;
					}
					else{
						end=mid-1;
					}
				}
			}
			break;
			
	if (index==-1){
		cout << "\nData tidak ditemukan"; getch();
	}
	return 0;
}
}
}


void bubbleSort(Batas batas[], int jumlahdata)//rumus bubble sort yang dapat memilih secara askending ataupun deskending
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


void selectionSort(Batas batas[], int jumlahdata)//rumus selection sort yang dapat memilih secara askending ataupun deskending
{ 
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

void quickSort_askending(Batas batas[], int low, int high)//rumus quicksort secara askending
{
	if (low < high)
	{
		int pi = partition_askending(batas, low, high);
		quickSort_askending(batas, low, pi - 1);
		quickSort_askending(batas, pi + 1, high);
	}
}

void quickSort_deskending(Batas batas[], int low, int high)//rumus quicksort secara deskending
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
	cout << "\n===================================\n\n";}


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
	

void sort_menu(){//Menu sorting yang dapat dipilih secara descending atai ascending
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
   
void search_menu(){//search menu yang dapat memilih mencari berdasarkan nama atau jenis
	int pilih;
	{
		cout << "=============================	" << endl
	 	<< 	 "      Searching Berdasarkan     	" << endl
	   	<<   "=============================		" << endl
	 	<<   "[1] Nama					" << endl
	 	<<   "[2] Jenis 				" << endl;
		cout << endl;
		cout << "Masukkan pilihan: "; cin >> pilih;			
		switch(pilih){
		case 1:
			binarySearch(1);
			break;	
					
		case 2:
			binarySearch(2);
			break;
				
				
		default:
		cout << "Pilihan tidak ada\n"; getch();
		}	
}
}


int main()//program utama dimana program pilihan menu berada
{
int pilih;
 char w;
 cout<<"\n\n=============================================================================";
 cout<<"\n=============================PROGRAM DATA OBAT===============================";
 cout<<"\n=============================================================================";
  cout<<"\n\n=== PILIHAN MENU ===";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Hapus Data";
  cout<<"\n3. Lihat Data";
  cout<<"\n4. Cari Data";  
  cout<<"\n5. Edit Data";
  cout<<"\n6. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {inputdata();main();}
  if(pilih==2)
   {hapusdata();main();}
  if(pilih==3)
   {sort_menu();main();}
  if(pilih==4)
   {search_menu();main();}
  if(pilih==5)
   {editdata();main();}
  if(pilih==6)
	cout << "TERIMA KASIH TELAH MENGGUNAKAN PROGRAM";
}




