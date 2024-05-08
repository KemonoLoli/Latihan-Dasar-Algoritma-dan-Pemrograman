#include <iostream>

using namespace std;

void RumusUT(int JJK, int UP){
	
	
	const int JamNormal = 48;
	const int UpahLembur = 30000;
	
	int JL;
	int UpahTotal;
	
	
		if (JJK<=JamNormal){
	UpahTotal=JJK*UP;
	}
	
		else if (JJK>JamNormal){
	JL=JJK-JamNormal;
	UpahTotal=(JamNormal*UP)+(JL*UpahLembur);
	}
	
	cout<<"Upah Total: "<<UpahTotal;
		
//	return UpahTotal;
	
}

int main() {
	
	const int JamNormal = 48;
	const int UpahLembur = 30000;
	
	int UP;
	int JJK;
	int JL;
	int UpahTotal;
	
	string Nama;
	
	char Gol;
	
	
	cout<<"Menghitung Upah Karyawan Per Golongan"<<endl;
	cout<<"Masukan Nama Karyawan: "; cin>>Nama;
	cout<<"Masukan Golongan: "; cin>>Gol;
	cout<<"Masukan Jumlah Jam Kerja: "; cin>>JJK;
	
	
	if (Gol == 'A'){
	UP=40000;
	RumusUT(JJK, UP);
//		if (JJK<=JamNormal){
//	UpahTotal=JJK*UP;
//	}
//	
//		else if (JJK>JamNormal){
//	JL=JJK-JamNormal;
//	UpahTotal=(JamNormal*UP)+(JL*UpahLembur);
//	}	
	}
	
	else if (Gol == 'B'){
	UP=50000;
	RumusUT(JJK, UP);
//		if (JJK<=JamNormal){
//	UpahTotal=JJK*UP;
//	}
//	
//		else if (JJK>JamNormal){
//	JL=JJK-JamNormal;
//	UpahTotal=(JamNormal*UP)+(JL*UpahLembur);
//	}	
	}
	
	else if (Gol == 'C'){
	UP=60000;
	RumusUT(JJK, UP);	
//		if (JJK<=JamNormal){
//	UpahTotal=JJK*UP;
//	}
//	
//		else if (JJK>JamNormal){
//	JL=JJK-JamNormal;
//	UpahTotal=(JamNormal*UP)+(JL*UpahLembur);
//	}	
	}
	
	else if (Gol == 'D'){
	UP=75000;
	RumusUT(JJK, UP);
//		if (JJK<=JamNormal){
//	UpahTotal=JJK*UP;
//	}
//	
//		else if (JJK>JamNormal){
//	JL=JJK-JamNormal;
//	UpahTotal=(JamNormal*UP)+(JL*UpahLembur);
//	}		
	}
	
	else {
		cout<<"Masukan Golongan Karyawan!";
	}
	
	
//			if (JJK<=JamNormal){
//	UpahTotal=JJK*UP;
//	}
	
//		else if (JJK>JamNormal){
//	JL=JJK-JamNormal;
//	UpahTotal=(JamNormal*UP)+(JL*UpahLembur);
//	}
	
//	cout<<"Upah Total: "<<UpahTotal;
	
	
//	cout<<"Upah Total: "<<RumusUT(JJK, UP);
	
//	return 0;
}
