#include <iostream>

using namespace std;

int main() {
	
	char Nilai;
	string Grade;
	
	cout<<"Mengkategorikan Grade Berdasarkan Nilai"<<endl;
	cout<<"Masukkan Nilai Anda (A sampai F): ";cin>>Nilai;
	
	switch (Nilai)
	{
		case 'A':Grade="Amat Baik"; break;
		case 'B':Grade="Baik"; break;
		case 'C':Grade="Cukup"; break;
		case 'D':Grade="Anda Lulus"; break;
		case 'E':Grade="Tidak Lulus"; break;
		case 'F':Grade="Remedial"; break;
	}
	
	cout<<"Grade Anda: "<<Grade;
}
