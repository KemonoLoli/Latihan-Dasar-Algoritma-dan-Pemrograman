#include <iostream>

using namespace std;

int main () {
	int A, B, C;
	A=8;
	B=5;
	
	cout<<"Nilai A dan B sebelum ditukar: \n";
	cout<<"A= " << A << "\n";
	cout<<"B= " << B << "\n";
	
	C=B;
	B=A;
	A=C;
	
	cout<<"Nilai A dan B setelah ditukar: \n";
	cout<<"A = " << A << "\n";
	cout<<"B = " << B << "\n";
}
