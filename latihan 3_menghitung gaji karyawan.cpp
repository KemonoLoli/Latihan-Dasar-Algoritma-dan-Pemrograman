#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//std::cout<<std::fixed;
	//std::cout<<std::setprecision(2);
	
	const float PersenTunjangan = 0.2;
	const float PersenPajak = 0.15;
	string NamaKaryawan;
	//int GajiPokok, Tunjangan, Pajak, GajiBersih;
	float GajiPokok, Tunjangan, Pajak, GajiBersih;
	
	cout<<"Menghitung Gaji Bersih Karyawan"<<endl;
	
	cout<<"Masukan Nama Karyawan: "; cin>>NamaKaryawan;
	cout<<"Masukan Gaji Pokok: "; cin>>GajiPokok;
	
	Tunjangan=PersenTunjangan*GajiPokok;
	Pajak=PersenPajak*(GajiPokok+Tunjangan);
	GajiBersih=(GajiPokok+Tunjangan)-Pajak;
	
	cout<<"Nama Karyawan: "<<NamaKaryawan<<endl;
	cout<<"Gaji Bersih: "<<GajiBersih<<endl;
	//std::cout<<std::fixed;
	//std::cout<<std::setprecision(2);
}
