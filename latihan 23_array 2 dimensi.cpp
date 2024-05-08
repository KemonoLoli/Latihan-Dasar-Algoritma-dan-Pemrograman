#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int Nilai [4][3];
	int pilih, i;
	
	Nilai[0][0]=50;
	Nilai[0][1]=68;
	Nilai[0][2]=70;
	Nilai[1][0]=72;
	Nilai[1][1]=88;
	Nilai[1][2]=60;
	Nilai[2][0]=90;
	Nilai[2][1]=95;
	Nilai[2][2]=85;
	Nilai[3][0]=55;
	Nilai[3][1]=76;
	Nilai[3][2]=46;
	
	while(1) {
		cout<<"(0=Arti, 1=Sya, 2=Dinda, 3=Aryo)\n";
		cout<<"Nama Mahasiswa (Silahkan input kode angka) : "; cin>>pilih;
		if ((pilih==0)||(pilih==1)||(pilih==2)||(pilih==3))
		break;
	}
	
	cout<<"\nNama Siswa : ";
	if(pilih==0) cout<<"Arti\n";
	if(pilih==1) cout<<"Sya\n";
	if(pilih==2) cout<<"Dinda\n";
	if(pilih==3) cout<<"Aryo\n";
	
	for(i=0;i<3;i++){
		cout<<"Minggu ke-"<<i+1<<":"<<Nilai[pilih][i]<<endl;
	}
	
	getch();
	return 0;
	
}
