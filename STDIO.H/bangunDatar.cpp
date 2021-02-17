#include <stdio.h>
using namespace std;

main(){
	int opsi,s,p,l,x;
	
	printf("1. Persegi \n");
	printf("2. Persegi Panjang \n");
	printf("Pilih opsi : ");
	scanf("%d", &opsi);
	
	if(opsi == 1){
		printf("Menghitung Persegi \n");	
		printf("Masukkan sisi : "); scanf("%d", &s);
		x = s*s;
		printf("Hasil : %d", x);
	}else if(opsi == 2){
		printf("Menghitung Persegi Panjang");
	}else{
		printf("Opsi tidak ada");
	}
}
