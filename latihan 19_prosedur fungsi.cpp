#include <iostream>

using namespace std;

void kali() {
	int a, b, hasil;
	cout<<"Masukkan nilai 1 = "; cin>>a;
	cout<<"MAsukkan nilai 2 = "; cin>>b;
	hasil=a*b;
	cout<<"Hasil kali : "<<hasil<<endl;
}

double bagi(){
	int c,d;
	float result;
	cout<<"Masukkan nilai 1 : "; cin>>c;
	cout<<"Masukkan nilai 2 : "; cin>>d;
	result=c/d;
	cout<<"Hasil bagi = ";
	return result;
}

int main () {
	cout<<bagi()<<endl;
	kali();
	cout<<endl;
	
//	getch();
}
