#include <iostream>
#include <sstream>

using namespace std;

double phi = 3.14;
int phii = 22/7;
string nilai;
double r, L;

main(){
	int fus = (7 , 14 , 21 , 28);
	cout<<fus;
	cout<<"Masukkan jari-jari : ";
	cin>>nilai;
	stringstream(nilai)>>r;
	
	if(nilai >= "a" && nilai <="z"){
		cout<<"Maaf tidak boleh memasukkan huruf"<<endl;
		return main();
	}else if(r <= 0){
		cout<<"Maaf angka 0 dan negatif tidak boleh masuk"<<endl;
		return main();
	}else if(r == fus{
		L = r*r*(22/7);
		cout<<"";
		cout<<L;
	}else{
		L = phi*r*r;
		cout<<L;
	}
	
}
