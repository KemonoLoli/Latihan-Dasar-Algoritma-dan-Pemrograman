#include <iostream>

using namespace std;

int main () {

	string Nama, KotaBerangkat, KotaTujuan;
	
	int TL, BL, HL, TB, BB, HB, Umur, HTNormal, HTAkhir;
	
	cout<<"Menghitung Harga Tiket \n";
	
	cout<<"Masukkan Nama Anda : "; cin>>Nama;
	cout<<"Masukkan Kota Keberangkatan : "; cin>>KotaBerangkat;
	cout<<"Masukkan Kota Tujuan : "; cin>>KotaTujuan;

	cout<<"Masukkan Tahun Lahir : "; cin>>TL;
	cout<<"Masukkan Bulan Lahir : "; cin>>BL;
	cout<<"Masukkan Hari Lahir : "; cin>>HL;
	
	cout<<"Masukkan Tahun Keberangkatan : "; cin>>TB;
	cout<<"Masukkan Bulan Keberangkatan : "; cin>>BB;
	cout<<"Masukkan Hari Keberangkatan : "; cin>>HB;
	
	Umur=((TB*365+BB*30+HB)-(TL*365+BL*30+HL))/365;

	cout<<"Masukkan Harga Tiket Normal : "; cin>>HTNormal;
	
	if (Umur<=2) {
		HTAkhir=HTNormal*0.1;
	}
	
	else if ((Umur>2) && (Umur<=12)) {
		HTAkhir=HTNormal*0.75;
	}
	
	else {
		HTAkhir=HTNormal;
	}
	
	cout<<"Nama : "<<Nama<<endl;
	cout<<"Kota Keberangkatan : "<<KotaBerangkat<<endl;
	cout<<"Kota Tujuan : "<<KotaTujuan<<endl;
	cout<<"Harga Tiket Anda : "<<HTAkhir<<endl;
	
}
