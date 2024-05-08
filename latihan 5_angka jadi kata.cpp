#include <iostream>

using namespace std;

int main() {
	
	int angka;
	
	cout<<"Masukan Angka (1-4)= "; cin>>angka;
	
	switch (angka)
	{
		case 1:cout<<"Satu \n"; break;
		case 2:cout<<"Dua \n"; break;
		case 3:cout<<"Tiga \n"; break;
		case 4:cout<<"Empat \n"; break;
		default:cout<<"Angka yang dimasukan salah, silahkan input 1 sampai 4"; break;
	}
}
