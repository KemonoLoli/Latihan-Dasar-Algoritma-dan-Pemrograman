#include <iostream>

using namespace std;

int perkalian (int arg1, int arg2) {
	int hasil = arg1 * arg2;
	return hasil;
}

int main() {
	int a;
	a=perkalian(2,3);
	
	cout<<"Fungsi = " << a << endl;
}
