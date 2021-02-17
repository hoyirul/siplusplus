#include <iostream>
using namespace std;

main(){
	int x;
	cout<<"Masukkan angka : ";
	cin>>x;
	cout<<endl;
	
//	baris 1
	for(int i=0;i<x;i++){
		cout<<"M"<<" ";
		int y = x - 1;
		for(int i=0;i<y;i++){
			cout<<"M"<<" ";
		}
		for(int i=0;i<x;i++){
			cout<<"o"<<" ";
		}
		
		for(int i=0;i<x;i++){
			cout<<"M"<<" ";
		}
		cout<<endl;
	}

//	baris 2
	for(int i=0;i<x;i++){
		cout<<"o"<<" ";
		int y = x - 1;
		for(int i=0;i<y;i++){
			cout<<"o"<<" ";
		}
		for(int i=0;i<x;i++){
			cout<<"X"<<" ";
		}
		
		for(int i=0;i<x;i++){
			cout<<"o"<<" ";
		}
		cout<<endl;
	}
	
//	baris 3
	for(int i=0;i<x;i++){
		cout<<"W"<<" ";
		int y = x - 1;
		for(int i=0;i<y;i++){
			cout<<"W"<<" ";
		}
		for(int i=0;i<x;i++){
			cout<<"o"<<" ";
		}
		
		for(int i=0;i<x;i++){
			cout<<"W"<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	//	baris 1
	for(int i=0;i<x;i++){
		cout<<"M"<<" ";
		int y = x - 1;
		for(int i=0;i<y;i++){
			cout<<"M"<<" ";
		}
		for(int i=0;i<x;i++){
			cout<<" "<<" ";
		}
		
		for(int i=0;i<x;i++){
			cout<<"M"<<" ";
		}
		cout<<endl;
	}

//	baris 2
	for(int i=0;i<x;i++){
		cout<<" "<<" ";
		int y = x - 1;
		for(int i=0;i<y;i++){
			cout<<" "<<" ";
		}
		for(int i=0;i<x;i++){
			cout<<"X"<<" ";
		}
		
		for(int i=0;i<x;i++){
			cout<<" "<<" ";
		}
		cout<<endl;
	}
	
//	baris 3
	for(int i=0;i<x;i++){
		cout<<"W"<<" ";
		int y = x - 1;
		for(int i=0;i<y;i++){
			cout<<"W"<<" ";
		}
		for(int i=0;i<x;i++){
			cout<<" "<<" ";
		}
		
		for(int i=0;i<x;i++){
			cout<<"W"<<" ";
		}
		cout<<endl;
	}
	
}
