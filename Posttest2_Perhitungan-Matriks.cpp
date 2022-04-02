//===================================================
//Nama : Muhammad Firdaus
//Nim : 2109106052
//===================================================
// program matriks dibawah mendapatkan referensi dari laman youtube Alian Hakim

#include <iostream>
using namespace std;

//perkalian matriks

void input(){
	
	//deklarasi variabel
	int baris,kolom,matriksA[3][3],matriksB[3][3],jml=0,hasil[3][3];
	
	cout << "===== PERKALIAN MATRIKS =====" << endl;
	
	cout << "masukkan jumlah baris : ";//input jumlah baris yang ingin dihitung
	cin >> baris;
	cout << "masukkan jumlah kolom : ";//input jumlah kolom yang ingin dihitung
	cin >> kolom;
	//catatan : jumlah dari baris dan kolom dua matriks a dan b harus sama,
	//kalau tidak maka program akan mengeluarkan peringatan kalau ordo matriks yang dimasukkan tidak valid 
	
	if(baris == kolom){
		
		cout << "=== MATRIKS A ===" << endl;//program menginput baris dan kolom dari matriks a
		for(int i = 0  ; i < baris ; i++){
			for(int j = 0 ; j < kolom ; j++){
				cout << "masukkan elemen baris ke " << i+1 << " kolom ke " << j+1 << " : " << "\t";
				cin >> matriksA[i][j];	
			}
		}
		
		cout << endl;
		cout << "===== ELEMEN MATRIKS A =====" << endl;//program mencetak hasil inputan matrik ke dalam bentuk matriks yang diinnginkan
		for(int i = 0 ; i < baris ; i++){
			for(int j = 0 ; j < kolom ; j++){
				cout << matriksA[i][j] << "\t";
			}
			cout << endl;
		}
		cout << endl;
		cout << "===== MATRIKS B =====" << endl << endl;//program menginput baris dan kolom dari matriks b
		for(int i = 0 ; i < baris ; i++){
			for(int j = 0 ; j < kolom ; j++){
				cout << "masukkan elemen baris ke " << i+1 << " kolom ke " << j+1 << " : " << "\t";
				cin >> matriksB[i][j];
			}
		}
		cout << endl;
		cout << "===== ELEMEN MATRIKS B =====" << endl;//program mencetak hasil inputan matrik ke dalam bentuk matriks yang diinnginkan
		for(int i = 0 ; i < baris ; i++){
			for(int j = 0 ; j < kolom ; j++){
				cout << matriksB[i][j] << "\t";
			}
			cout << endl;
		}
		
		for(int i = 0 ; i < baris ; i++){//rumus perhitungan dalam perkalian matriks
			for(int j = 0 ; j < kolom ; j++){
				jml = 0;
				for(int k = 0 ; k < baris ; k++){
					jml = jml + matriksA[i][k] * matriksB[k][j];// jml = jumlah
				}
				hasil[i][j] = jml;
			}
		}
		cout << endl;//hasil output dari perkalian matriks yang diinginkan
		cout << "===== HASIL PERKALIAN MATRIKS A DAN MATRIKS B =====" << endl;
		for(int i = 0 ; i < baris ; i++){
			for(int j = 0 ; j < baris ; j++){
				cout << " " << hasil[i][j] << " | ";
			}
			cout << endl;
		}
		
	}else{
		cout << "Ordo matriks tidak sama, gunakanlah ordo matriks yang sama seperti (3x3)" << endl;
		//sebagai error heandling yang mana jika matriks yang kita masukkan tidak sama dwengan a = b maka akan mencetak kalimat diatas
	}
	}
	
	int main(){//perulangan program yang menggunakan metode while dan bool
	cout<<"=========================================================="<<endl;
	cout<<"=====================Perkalian Matriks===================="<<endl;
	cout<<"=========================================================="<<endl;
	cout<<endl;
	bool running = true;
 while(running) {//peulangan while yang digunakan untuk melakukan perulangan dalam program
 	char ask_running;
	input();
	cout<<endl;
	cout<<"Apakah ingin melakukan lagi?(y/t) : ";// program menanyakan apakah ingin lanjut atau tidak
	cin>>ask_running;
	running = ask_running == 'y';
 }
 return 0;
}

		

