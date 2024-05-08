#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	float nilai[5];
	float jumlah, rata2;
	
	cout<<"Program menghitung rata-rata"<<endl;
	for(int i=0;i<5;i++){
		cout<<"Silahkan Input nilai ke-"<<(i+1)<<":";
		cin>>nilai[i];
	}
	jumlah=0;
	
	for(int i=0;i<5;i++){
		jumlah=jumlah+nilai[i];
	}
	
	rata2=jumlah/5;
	cout<<"\nNilai rata-rata anda adalah "<<rata2<<endl;
	getch();
}
