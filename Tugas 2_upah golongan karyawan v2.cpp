#include <iostream>

using namespace std;

int main() {
	
	const int JamNormal = 48;
	const int UpahLembur = 30000;
	
	int UP;
	int JJK;
	int JL;
	int UpahTotal;
	
	string Nama;
	
	char Gol;
	
	
	cout<<"Menghitung Upah Karyawan Per Golongan"<<endl;
	cout<<"Masukan Nama Karyawan: "; cin>>Nama;
	cout<<"Masukan Golongan: "; cin>>Gol;
	cout<<"Masukan Jumlah Jam Kerja: "; cin>>JJK;
	
	
	if (Gol == 'A'){
	UP=40000;
	}
	
	if (Gol == 'B'){
	UP=50000;
	}

	if (Gol == 'C'){
	UP=60000;
	}
	
	if (Gol == 'D'){
	UP=75000;
	}

	if (JJK<=JamNormal){
	UpahTotal=JJK*UP;
	}
	
	else {
	JL=JJK-JamNormal;
	UpahTotal=(JamNormal*UP)+(JL*UpahLembur);
	}
	
	
	cout<<"Upah Total: "<<UpahTotal;


}
