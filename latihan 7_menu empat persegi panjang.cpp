#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int NomorMenu;
	float panjang, lebar, luas, keliling, diagonal;
	
	cout<<"MENU EMPAT PERSEGI PANJANG= \n";
	cout<<"1. Hitung Luas \n";
	cout<<"2. Hitung Keliling \n";
	cout<<"3. Hitung Panjang Diagonal \n";
	cout<<"4. Keluar Program \n";
	cout<<"Masukkan pilihan anda (1/2/3/4) \n"; cin>>NomorMenu;
	
	switch (NomorMenu)
	{
		case 1:{
			cout<<"Panjang= "; cin>>panjang;
			cout<<"Lebar= "; cin>>lebar;
			luas=panjang*lebar;
			cout<<"Luas= "<<luas<<endl;
			break;
		}
		case 2:{
			cout<<"Panjang= "; cin>>panjang;
			cout<<"Lebar= "; cin>>lebar;
			keliling= 2*panjang+2*lebar;
			cout<<"Keliling= "<<keliling<<endl;
			break;
		}
		case 3:{
			cout<<"Panjang= "; cin>>panjang;
			cout<<"Lebar= "; cin>>lebar;
			diagonal=sqrt(pow(panjang, 2)+pow(lebar, 2));
			cout<<"Diagonal= "<<diagonal<<endl;
			break;	
		}
		case 4:cout<<"Keluar Program "<<endl;
	}
}
