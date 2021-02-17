#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int suku,a,b,c;
	string x="y";
	
	while ( x=="y"  || x=="Y"){
	
	cout<<"DERET FIBONACCI"<<endl;
	cout<<"masukkan suku pertama :";
	cin>>c;
	a=0;b=c;
	cout<<a<<endl<<b<<endl;
	
	for (int i=0; i<=5; i++){
		
		c=a+b;
		cout<<c<<endl;
		a=b;
		b=c;
		
	
	}
	cout<<"apakah anda akan mengulangi lagi?y/n"<<endl;
	cin>>x;
	system("CLS");
	}
	getch();
}
