#include <iostream>

using namespace std;

int main () {
	int nilai, i;
//	int sum;
	float sum, rata2;
	
	sum=0;
	i=0;
	
	cout<<"Masukkan Nilai Siswa= "; cin>>nilai;
	
	while (nilai!=-1){
		i++;
		sum=sum+nilai;
		cout<<"Masukkan Nilai Siswa= "; cin>>nilai;
	}
	
	if (i!=0){
		rata2=sum/i;
		cout<<"Rata-rata= "<<rata2<<endl;
	}
	
	else {
		cout<<"Tidak Ada Data Nilai Ujian yang Dimasukkan";
	}
}
