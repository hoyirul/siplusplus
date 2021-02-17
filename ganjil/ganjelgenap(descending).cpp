#include <iostream>

using namespace std;

int main(){
	int i;
	
	cout<<"Mencetak bilangan ganjil di C++"<<endl;
	
	for(i=30;i>0;i--){
		if(i% 2!=0){
			cout<<" "<<i<<" ";
		}
	}
	
	cout<<endl<<endl;
	cout<<"Mencetak bilangan genap di C++"<<endl;
	
	for(i=30;i>0;i--){
		if(i% 2==0){
			cout<<" "<<i<<" ";
		}
	}
}
