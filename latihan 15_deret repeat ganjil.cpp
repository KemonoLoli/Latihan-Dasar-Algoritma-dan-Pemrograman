#include <iostream>

using namespace std;

int main() {
	int i, N, sum;
	
	cout<<"Berapa N? \n"; cin>>N;
	sum=0;
	i=1;
	do{
		sum=sum+i;
		i=i+2;
		cout<<"Jumlah Deret= \n"<<sum<<endl;
	}
	while (i<=N);
}
