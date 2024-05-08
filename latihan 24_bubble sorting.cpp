#include <iostream>
#include <conio.h>

using namespace std;

int main () {
	int i, k, n, Larik[18], temporary;
	
	cout<<"\n Inputkan banyak data yang ingin di urutkan : ";
	cin>>n;
	cout<<"\n";
	for (i=1; i<=n; i++) {
		cout<<"\t Inputkan data ke-"<<i<<"=";
		cin>>Larik[i];
	}
	
	for (i=1; i<=n; i++){
		for (k=i; k<=n; k++){
			if (Larik[i]>Larik[k]){
				temporary=Larik[k];
				Larik[k]=Larik[i];
				Larik[i]=temporary;
			}
		}
	}
	
	cout<<"\n Hasil pengurutan data secara ascending \n";
	
	for(i=1;i<=n;i++) {
		cout<<"\t Element"<<i<<"="<<Larik[i]<<endl;
	}
	
	getch();u
}
