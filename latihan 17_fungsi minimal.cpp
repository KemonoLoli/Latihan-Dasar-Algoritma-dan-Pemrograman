#include <iostream>

using namespace std;

double paling_kecil (double x, double y) {
	double minimal;
	if (x<y){
		minimal = x;
	}
	else {
		minimal = y;
	}
	return minimal;
}

int main() {
	double nilai_minimal=paling_kecil(2,5);
	cout<<"Fungsi = " << nilai_minimal << endl;
}
