//NAMA : Muhammad Firdaus
//NIM : 2109106052
//---Posttest1---
//program menghitung kombinasi dan permutasi

//===============================================================================================================================
//Variabel
// n = jumlah, r = banyak syarat, a = faktorial dari selisih n dan r, 
// while = perulangan, bool = tipe data yang bernilai true atau false,
//p = permutasi, k = kombinasi,
//void = merupakan fungsi yang digunakan jika fungsi tersebut tidak menghasilkan nilai keluaran dari proses yang ada didalamnya.
//===============================================================================================================================

int faktorial(int X){
int i=1, f;
f=1;
while(i<=X)
{
f=f*i;
i++;
}
return(f);
}

#include <iostream>
using namespace std;
void input(){	
int n, r, a, permutasi, kombinasi;
char h;
cout<<"======================="<<endl;
cout<<"PERMUTASI DAN KOMBINASI"<<endl;
cout<<"======================="<<endl<<endl;
cout<<"Permutasi atau Kombinasi ? (p/k) : ";//output
cin>>h;//input
cout<<endl;
cout<<"Tentukan nilai n : ";
cin>>n;
cout<<"Tentukan nilai r : ";
cin>>r;
cout<<endl;
a=n-r;
switch (h)
{
case 'p'://rumus dari permutasi
permutasi=faktorial(n)/faktorial(a);
cout<<"Hasil permutasi dari "<<n<<" dan "<<r<<" adalah "<<permutasi<<endl;
break;

case 'k'://rumus dari kombinasi
kombinasi=faktorial(n)/(faktorial(a)*faktorial(r));
cout<<"Hasil kombinasi dari "<<n<<" dan "<<r<<" adalah "<<kombinasi<<endl;
break;
}
}

int main(){
	cout<<"=========================================================="<<endl;
	cout<<"=====Program Menentukan Hasil Kombinasi dan Permutasi====="<<endl;
	cout<<"=========================================================="<<endl;
	cout<<endl;
	bool running = true;
 while(running) {//peulangan while
 	char ask_running;
	input();
	cout<<endl;
	cout<<"Apakah ingin melakukan lagi?";
	cin>>ask_running;
	running = ask_running == 'y';
 }
 return 0;
}

