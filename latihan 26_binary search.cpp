#include <iostream>

using namespace std;

int aryo[7]={2,5,7,8,10,13,15};
int cari;

void binary_search(){
	int awal=0, akhir=6, tengah, b_flag=0;
	while (b_flag==0 && awal<=akhir)
	{
		tengah=(awal+akhir)/2;
		if(aryo[tengah]==cari){
			b_flag=1;
		}
		else if(aryo[tengah]<cari){
			awal=tengah+1;
		}
		else {
			akhir=tengah-1;
		}
	}
	if(b_flag==1){
		cout<<"\nData ditemukan pada index ke-"<<tengah<<endl;
	}
	else{
		cout<<"\nData tidak ditemukan\n";
	}
	
}

int main(){
	cout<<"\nMasukkan data yang ingin dicari: "; cin>>cari;
	binary_search();
}
