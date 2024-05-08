#include <iostream>

using namespace std;

void VarLokal() {
	int A;
	A=20;
	cout<<"Nilai Variabel A adalah : "<<A<<endl;
}

int main () {
	int B;
	B=10;
	cout<<"Nilai Variabel B adalah : "<<B<<endl;
	
	VarLokal();
	
	return 0;
}
