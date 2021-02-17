#include <iostream>

using namespace std;

int main(){
	int angka;
	string z="y";
	
	while(z =="y" || z== "Y"){
	cout<<"Masukkan angka 1-12 untuk menetukan bulan"<<endl;
	cin>>angka;
	cout<<endl;
	
	
	if(angka == 1){
		cout<<"Bulan Januari"<<endl;
	}
	else if(angka == 2){
		cout<<"Bulan Februari"<<endl;
	}
	else if(angka == 3){
		cout<<"Bulan Maret"<<endl;
	}
	else if(angka == 4){
		cout<<"Bulan april"<<endl;
	}
	else if(angka == 5){
		cout<<"Bulan Mei"<<endl;
	}
	else if(angka == 6){
		cout<<"Bulan Juni"<<endl;
	}
	else if(angka == 7){
		cout<<"Bulan Juli"<<endl;
	}
	else if(angka == 8){
		cout<<"Bulan Agustus"<<endl;
	}
	else if(angka == 9){
		cout<<"Bulan September"<<endl;
	}
	else if(angka == 10){
		cout<<"Bulan Oktober"<<endl;
	}
	else if(angka == 11){
		cout<<"Bulan November"<<endl;
	}
	else if(angka == 12){
		cout<<"Bulan Desember"<<endl;
	}
	else if(angka >=13){
		cout<<"Anda salah inutan, inputan hanya bisa angka 1-12"<<endl;
	}
	cout<<"apakah anda ingin melanjutkan? y/n"<<"\n"<<endl;
	cin>>z;
	system("CLS");
	}
}
