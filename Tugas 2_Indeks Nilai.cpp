#include <iostream>

using namespace std;

int main() {
	
	string Nama;
	float Nilai;
	char Indeks;
	
	cout<<"Menghitung Indeks Nilai Ujian Mahasiswa"<<endl;
	cout<<"Masukan nama mahasiswa: "; cin>>Nama;
	cout<<"Masukan nilai mahasiswa: "; cin>>Nilai; cout<<endl;
	
	if (Nilai>=80){
		Indeks='A';
	}
	
	else if ((Nilai>=70) && (Nilai<80)){
		Indeks='B';
	}
	
	else if ((Nilai>=55) && (Nilai<70)){
		Indeks='C';
	}
	
	else if ((Nilai>=40) && (Nilai<55)){
		Indeks='D';
	}
	
	else {
		Indeks='E';
	}
	
	cout<<"Nama: "<<Nama<<endl;
	cout<<"Nilai: "<<Nilai<<endl;
	cout<<"Indeks Nilai: "<<Indeks;
	
}
