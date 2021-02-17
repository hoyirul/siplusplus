#include <iostream>
using namespace std;
int login();

int main(){
	int x;
	cin>>x;
	if(x==1){
		goto login;
	}
	else{
		return main();
	}
	
	login:
	cout<<"INI LOGIN";
}
int login(){
	cout<<"ini login";
}
