#include <iostream>

using namespace std;

string nama;
int lagi();

int main(){
	string hari[] = {"senin", "selasa", "rabu", "kamis", "jumat", "sabtu"};
	//	string hari;
	
	cout<<hari[1]<<'\n';
	cin>>nama;
	
	return lagi(); 
}

int lagi(){
	cout<<"INPUT LAGI"<<'\n';
	cin>>nama;
}
