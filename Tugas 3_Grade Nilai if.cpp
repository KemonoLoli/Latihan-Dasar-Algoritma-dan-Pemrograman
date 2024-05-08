#include <iostream>

using namespace std;

int main() {
	
	char Nilai;
	string Grade;
	
	cout<<"Mengkategorikan Grade Berdasarkan Nilai"<<endl;
	cout<<"Masukkan Nilai Anda (A sampai F): ";cin>>Nilai;
	
	if (Nilai=='A') {
		Grade="Amat Baik";
	}
	
	if (Nilai=='B') {
		Grade="Baik";
	}
	
	if (Nilai=='C') {
		Grade="Cukup";
	}
	
	if (Nilai=='D') {
		Grade="Anda Lulus";
	}
	
	if (Nilai=='E') {
		Grade="Tidak Lulus";
	}
	
	if (Nilai=='F') {
		Grade="Remedial";
	}
	
	cout<<"Grade Anda: "<<Grade;
	
}
