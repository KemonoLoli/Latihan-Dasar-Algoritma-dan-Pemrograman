#include <iostream>

using namespace std;

int main() {
	
	int umur;
	string KategoriUmur;
	
	cout<<"Menentukan Kategori Umur"<<endl;
	cout<<"Masukkan Umur Anda: "; cin>>umur;
	
	if ((umur>=0)&&(umur<=5)){
		KategoriUmur="Balita";
	}
	
	else if ((umur>5)&&(umur<=12)){
		KategoriUmur="Anak-anak";
	}
	
	else if ((umur>12)&&(umur<=20)){
		KategoriUmur="Remaja";
	}
	
	else if ((umur>20)&&(umur<=60)){
		KategoriUmur="Dewasa";
	}
	
	else {
		KategoriUmur="Tua";
	}
	
	cout<<"Kategori Umur Anda: "<<KategoriUmur;
}
