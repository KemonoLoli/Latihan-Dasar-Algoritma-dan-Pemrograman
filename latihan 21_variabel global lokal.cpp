#include <iostream>
#include <string>

using namespace std;

string nama="hasan";
string grade_value;

void grade (int nilai){
	int a=85, b=70;
	
	if (nilai>=a){
		grade_value="A";
	}
	else if (nilai>=b && nilai<a){
		grade_value="B";
	}
	else {
		grade_value="C";
	}
}

int main(){
	grade(82);
	cout<<"selamat grade kamu: "<<grade_value<<endl;
}
