#include <iostream>
using namespace std;

int main()
{
	int a,b,hasil;
	
	cout<<"Penentukan Bangun Persegi Atau Persegi Panjang !"<<endl;
	cout<<"Masukkan Sisi 1 = ";
	cin>>a;
	cout<<"Masukkan Sisi 2 = ";
	cin>>b;
	if(a == b)
	{
		hasil=a*b;
		cout<<"Hasil = "<<hasil<<endl;
		cout<<"Bangun Persegi"<<endl;
	}
	else if(a == "A" && b == "Z")
	{
		cout<<"Tidak boleh memasukkan huruf ! ";
	}
	else
	{
		hasil=a*b;
		cout<<"Hasil = "<<hasil<<endl;
		
		cout<<"Bangun Persegi Panjang"<<endl;
	}
 	return 0;
}
