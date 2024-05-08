#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	std::cout<<std::fixed;
	std::cout<<std::setprecision(2);
	
	const int JamNormal = 48;
	const int UpahPerJam = 20000;
	const int UpahLembur = 30000;
	
	string NamaKaryawan;
	int JJK;
	int JL;
	int Upah;
	
	cout<<"Menghitung Upah Karyawan"<<endl;
	
	cout<<"Masukan Nama Karyawan: "; cin>>NamaKaryawan;
	cout<<"Masukan Jumlah Jam Kerja: "; cin>>JJK;
	
	if (JJK<=JamNormal){
	Upah=JJK*UpahPerJam;
	}
	
	
	else if (JJK>JamNormal){
	JL=JJK-JamNormal;
	//Upah=(JamNormal*UpahPerJam)+(JL*UpahLembur);
	Upah=960000+(JL*UpahLembur);
	}

	
	cout<<"Upah"<<Upah;
}
