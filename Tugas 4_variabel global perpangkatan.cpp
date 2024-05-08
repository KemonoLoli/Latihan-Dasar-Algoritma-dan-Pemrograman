#include <iostream>
#include <cmath>

using namespace std;

int pangkat=2;
int result;

int perpangkat(int x){
	result=pow(x,pangkat);
	return result;
}

int main(){
	pangkat=3;
	perpangkat(10);
	cout<<"Hasil perpangkatan= "<<result;
}
