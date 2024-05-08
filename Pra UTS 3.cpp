#include <iostream>

using namespace std;

int main () {
	
	const int SaldoMinimum=10000;
	
	int MenuUtama, Saldo, JumlahPenarikan, SaldoAkhir, Deposit;
	
	Saldo=10000000;
	
	cout<<"Saldo Anda : "<<Saldo<<endl;
	
	do {
		
		cout<<"Menu Transaksi : \n";
		cout<<"0. Menyetor Uang"<<endl;
		cout<<"1. Mengambil Uang"<<endl;
		cout<<"Masukkan pilihan anda (0/1) : \n"; cin>>MenuUtama;
		
		switch (MenuUtama) {
		case 0:{
			cout<<"Masukkan Jumlah Deposit Anda : "; cin>>Deposit;
			cout<<"Masukkan Uang Anda"<<endl;
			cout<<"Uang Anda Sedang diproses"<<endl;
			SaldoAkhir=Saldo+Deposit;
			Saldo=SaldoAkhir;
			cout<<"Saldo Akhir Anda : "<<Saldo<<endl;
			break;
		}
		
		case 1:{
			cout<<"Masukkan Jumlah Pengambilan : "; cin>>JumlahPenarikan;
			SaldoAkhir=Saldo-JumlahPenarikan;
			Saldo=SaldoAkhir;
			if (Saldo>=SaldoMinimum) {
			    cout<<"Silahkan Ambil Uang Anda \n";
			    cout<<"Saldo Anda : "<<Saldo<<endl;
			}
			
			else {
			    cout<<"Jumlah Pengambilan Melebihi Saldo Anda"<<endl;
			}
			break;
		}
		
		default : cout<<"Angka yang dimasukkan salah!"<<endl;
	}
	}
	
	while (Saldo>=SaldoMinimum);

}
