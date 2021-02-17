#include <iostream>

using namespace std;

int main(){
	int i,nilai,angka;
	
	cout<<"berapa nilai yang akan dimasukkan :"<<endl;
	cin>>nilai;
	
	for(i=1;i<=nilai;i++){
		cout<<"masukkan nilai ke - ";
		cin>>angka;
	}
	for(i=1;i<=nilai;i++){
		if(i<=angka && angka<=70){
			cout<<"siswa gendeng"<<endl;
			cout<<" "<<angka;
		}else if(i<=angka && angka>70){
			cout<<"pintar"<<endl;
			cout<<" "<<angka;
		}
	}
			
} 
