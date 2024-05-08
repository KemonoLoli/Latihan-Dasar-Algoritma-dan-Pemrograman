#include <iostream>

using namespace std;

int main() {
	int i, N, sum;
	
	cout<<"Berapa N? \n"; cin>>N;
	sum=0;
	for (i=1;i<=N;i++){
		sum=sum+i;
		cout<<"Jumlah Deret= \n"<<sum<<endl;
	}
}
