#include <iostream>
using namespace std;

const int Nmax=100;
typedef int LarikInt [Nmax+1];
int i;

void BacaLarik (LarikInt L, int n){
	for(i=1; i<=n; i++) {
		cout<<"Masukkan Nilai L ["<<i<<"] : "; cin>>L[i];
	}
}

void CetakLarik (LarikInt L, int n){
	for(i=1; i<=n; i++){
		cout<<"L["<<i<<"] = "<< L[i]<<endl;
	}
}

void SelectionSort1 (LarikInt L, int n){
	int j, imin, temp;
	
	for (i=1; i<=n; i++){
		imin=1;
		for(j=i+1; j<=n; j++){
			if (L[j]<L[imin])
			imin=j;
			temp=L[imin];
			L[imin]=L[i];
			L[i]=temp;
		}
	}
}

int main() {
	LarikInt L;
	int n;
	
	cout<<"Berapa jumlah data (n)?"; cin >> n;
	
	cout<<"Input data : "<<endl;
	
	BacaLarik(L,n);
	
	cout<<"Urutkan data : "<<endl;
	
	SelectionSort1(L,n);
	
	cout<<"Cetak Larik terurut : "<<endl;
	
	CetakLarik(L,n);
}
