#include <iostream>
#include <sstream>

using namespace std;
string kartu, MyPin,lanjut;
int size,opsi,kembali;

// default saldo
int saldo = 1000000;
string y,check;
int setor,tarik,jumlah_transfer,rek_tujuan,kode_bank;

main(){
	
	back:
	cout<<"Masukkan kartu : Y/N "<<endl;
	cout<<">> ";cin>>kartu;
	if(kartu == "Y" || kartu == "y"){
		system("cls");
		goto pin;
	}else{
		system("CLS");
		goto back;
	}
	
	// masukkan pin
	pin:
	cout<<"KARTU TELAH DIMASUKKAN"<<endl;
	cout<<"MASUKKAN PIN ANDA : ";cin>>MyPin;
	stringstream(MyPin)>>size;
	
	if(MyPin >= "a" && MyPin <= "z" || MyPin >= "A" && MyPin <= "Z"){
		system("cls");
		cout<<"===== HARUS ANGKA ====="<<endl<<endl;
		goto pin;
	}else{
		if(MyPin.length() == 6){
			system("cls");
			goto dashboard;	
		}else{
			// kembali ke masukk
			system("cls");
			cout<<"HARUS 6 PANJANG KARAKTER"<<endl;
			goto pin;
		}
	}
	
	// tampilan setelah memasukkan pin
	dashboard:
	cout<<"PILIH OPSI "<<endl;
	cout<<"1. INFORMASI SALDO"<<endl;
	cout<<"2. SETOR TUNAI"<<endl;
	cout<<"3. TARIK TUNAI"<<endl;
	cout<<"4. TRANSFER"<<endl;
	cout<<"5. KELUAR"<<endl;
	cout<<">> ";cin>>opsi;
	
	switch(opsi){
		case 1:
			system("cls");
			goto informasi_saldo;
			break;
		case 2:
			system("cls");
			goto setor_tunai;
			break;
		case 3:
			system("cls");
			goto tarik_tunai;
			break;
		case 4:
			system("cls");
			goto transfer;
			break;
		case 5:
			system("cls");
			cout<<"==== SILAHKAN AMBIL KARTU ANDA ===="<<endl<<endl;
			goto back;
			break;
		default:
			system("cls");
			cout<<"TAK ADA PILIHAN"<<endl;
			goto dashboard;
			break;
	}
	
	
	// menu informasi saldo
	informasi_saldo:
	cout<<"INFORMASI SALDO ANDA : ";
	cout<<"Rp."<<saldo<<".00,-"<<endl;
	cout<<"1. BACK "<<endl;
	cout<<">> ";cin>>kembali;
	switch(kembali){
		case 1:
			system("cls");
			goto dashboard;
			break;
		default:
			system("cls");
			cout<<"===== TIDAK ADA OPSI ====="<<endl<<endl;
			goto informasi_saldo;
			break;
	}
	
	// menu setor tunai
	setor_tunai:
	cout<<"SETOR TUNAI"<<endl;
	// masukkan
	cout<<"====== UANG HARUS KELIPATAN Rp. 50.000 ======"<<endl;
	cout<<"MASUKKAN JUMLAH YANG DI SETOR "<<endl;
	cout<<">> Rp. ";cin>>y;
	stringstream(y)>>setor;
	
	if(y >= "a" && y <= "z" || y >= "A" && y <= "Z"){
		system("cls");
		cout<<"===== HARUS ANGKA ====="<<endl<<endl;
		goto setor_tunai;
	}else if(setor < 50000){
		system("cls");
		cout<<"======= UANG HARUS >= Rp. 50.000 ======"<<endl<<endl;
		goto setor_tunai;
	}else if(setor % 50000 == 0){
		// jumlah yang disetor
		system("cls");
		cout<<"JUMLAH YANG DI SETOR Rp."<<setor<<endl;
		cout<<"YAKIN MELANJUTKAN TRANSAKSI ? Y/N"<<endl;
		cout<<">> ";cin>>lanjut;
		
		// kondisi
		if(lanjut == "Y" || lanjut == "y"){
			// saldo + setor
			saldo += setor;
			
			system("cls");
			cout<<".:: TELAH SELESAI SETOR TUNAI ::."<<endl<<endl;
			// opsi menus
			cout<<"1. KEMBALI KE MENU"<<endl;
			cout<<"2. KEMBALI KE MENU SETOR"<<endl;
			cout<<">> ";cin>>kembali;
			
			switch(kembali){
				case 1:
					system("cls");
					goto dashboard;
					break;
				case 2:
					system("cls");
					goto setor_tunai;
					break;
				default:
					system("cls");
					cout<<"====== TIDAK ADA OPSI ======"<<endl<<endl;
					goto setor_tunai;
					break;
			}
			
		}else{
			system("cls");
			goto setor_tunai;
		}
		
	}else{
		system("cls");
		cout<<"====== UANG HARUS KELIPATAN Rp. 50.000 ======"<<endl<<endl;
		goto setor_tunai;
	}
	
	
	// menu tarik tunai
	tarik_tunai:
	cout<<"TARIK TUNAI"<<endl;
	// masukkan
	cout<<"MASUKKAN JUMLAH YANG DI TARIK "<<endl;
	cout<<">> Rp. ";cin>>y;
	stringstream(y)>>tarik;
	
	if(y >= "a" && y <= "z" || y >= "A" && y <= "Z"){
		system("cls");
		cout<<"===== HARUS ANGKA ====="<<endl<<endl;
		goto tarik_tunai;
	}else if(tarik < 50000){
		system("cls");
		cout<<"====== UANG HARUS >= Rp. 50.000 ======"<<endl;
		goto tarik_tunai;
	}else if(tarik % 50000 == 0){
		// jumlah yang disetor
		cout<<"JUMLAH YANG DI TARIK Rp."<<tarik<<endl;
		cout<<"YAKIN MELANJUTKAN TRANSAKSI ? Y/N"<<endl;
		cout<<">> ";cin>>lanjut;
		
		// kondisi
		if(lanjut == "Y" || lanjut == "y"){
			// saldo + setor
			saldo -= tarik;
			
			system("cls");
			cout<<".:: TELAH SELESAI TARIK TUNAI ::."<<endl;
			cout<<".:: SILAHKAN AMBIL UANG ANDA ::."<<endl<<endl;
			// opsi menus
			cout<<"1. KEMBALI KE MENU"<<endl;
			cout<<"2. KEMBALI KE MENU TARIK"<<endl;
			cout<<">> ";cin>>kembali;
			
			switch(kembali){
				case 1:
					system("cls");
					goto dashboard;
					break;
				case 2:
					system("cls");
					goto tarik_tunai;
					break;
				default:
					system("cls");
					cout<<"===== TIDAK ADA OPSI ======"<<endl<<endl;
					goto tarik_tunai;
					break;
			}
			
		}else{
			system("cls");
			goto tarik_tunai;
		}
		
	}else{
		system("cls");
		cout<<"====== UANG HARUS KELIPATAN Rp. 50.000 ======"<<endl<<endl;
		goto tarik_tunai;
	}
	
	// menu transfer
	transfer:
	cout<<".:: TRANSFER ::."<<endl;
	cout<<endl;
	cout<<"1. KE REK BANK SAMA"<<endl;
	cout<<"2. KE REK BANK LAIN"<<endl;
	cout<<">> ";cin>>opsi;
	
	switch(opsi){
		case 1:
			system("cls");
			goto bank_sama;
			break;
		case 2:
			system("cls");
			goto bank_lain;
			break;
		default:
			system("cls");
			cout<<"====== OPSI TIDAK ADA ======"<<endl<<endl;
			goto transfer;
			break;
	}
	
	// bank sama
	bank_sama:
	cout<<".:: BANK YANG SAMA ::."<<endl;
	cout<<"MASUKKAN NO REK TUJUAN"<<endl;
	cout<<">> ";cin>>check;
	stringstream(check)>>rek_tujuan;
	
	if(check >= "a" && check <= "z" || check >= "A" && check <= "Z"){
		system("cls");
		cout<<"===== HARUS ANGKA ====="<<endl<<endl;
		goto bank_sama;
	}else if(check.length() == 10){
		system("cls");
		// masukkan jumlah nominal
		jumlah_tf:
		cout<<"NOMINAL UANG YANG DI TRANSFER"<<endl;
		cout<<">> Rp. ";cin>>jumlah_transfer; 
		
		if(jumlah_transfer >= saldo){
			system("cls");
			cout<<"====== MAAF SALDO TIDAK CUKUP ======"<<endl<<endl;
			cout<<"JUMLAH SALDO ANDA"<<endl;
			cout<<">> Rp. "<<saldo<<endl;;
			goto jumlah_tf;
		}else{
			cout<<"YAKIN AKAN TRANSFER ? Y/N "<<endl;
			cout<<"NO REK  : "<<rek_tujuan<<endl;
			cout<<"NOMINAL : "<<jumlah_transfer<<endl;
			cout<<">> ";cin>>lanjut;
			
			if(lanjut == "Y" || lanjut == "y"){
				saldo -= jumlah_transfer;
				cout<<".:: TRANSFER BERHASIL ::."<<endl;
				cout<<"SALDO ANDA"<<endl;
				cout<<">> Rp. "<<saldo<<endl;
				cout<<"1. BACK"<<endl;
				switch(kembali){
					case 1:
						system("cls");
						goto dashboard;
						break;
					default:
						system("cls");
						cout<<"===== TIDAK ADA OPSI ======"<<endl<<endl;
						goto informasi_saldo;
						break;
				}
			}else{
				system("cls");
				goto transfer;
			}
		}
		
	}else{
		system("cls");
		cout<<"===== NO REKENING TIDAK BOLEH LEBIH/KURANG DARI 10 DIGIT ======"<<endl<<endl;
		goto bank_sama;
	}
	
	// bank lain
	bank_lain:
	cout<<".:: KODE BANK ::."<<endl;	
	cout<<"002. BANK BRI "<<endl;
	cout<<"012. BANK BCA "<<endl;
	cout<<"108. BANK MANDIRI "<<endl;
	cout<<"007. BANK BNI "<<endl;
	cout<<"MASUKKAN KODE BANK "<<endl;
	cout<<">> ";cin>>check;
	stringstream(check)>>kode_bank;
	
	if(check >= "a" && check <= "z" || check >= "A" && check <= "Z"){
		system("cls");
		cout<<"===== HARUS ANGKA ====="<<endl<<endl;
		goto bank_lain;
	}else{
		switch(kode_bank){
			case 002:
				tujuan_bri:
				system("cls");
				cout<<"KODE BANK BRI"<<endl;
				cout<<"MASUKKAN NO REK TUJUAN"<<endl;
				cout<<">> ";cin>>check;
				stringstream(check)>>rek_tujuan;
				
				if(check >= "a" && check <= "z" || check >= "A" && check <= "Z"){
					system("cls");
					cout<<"===== HARUS ANGKA ====="<<endl<<endl;
					goto tujuan_bri;
				}else if(check.length() == 10){
					system("cls");
					// masukkan jumlah nominal
					nominal_bri:
					cout<<"NOMINAL UANG "<<endl;
					cout<<">> ";cin>>jumlah_transfer; 
					
					if(jumlah_transfer >= saldo){
						system("cls");
						cout<<"====== MAAF SALDO TIDAK CUKUP ======"<<endl;
						cout<<"JUMLAH SALDO ANDA"<<endl;
						cout<<">> Rp. "<<saldo<<endl;;
						goto nominal_bri;
					}else{
						cout<<"YAKIN AKAN TRANSFER ? Y?N "<<endl;
						cout<<"BANK TUJUAN BRI"<<endl;
						cout<<"NO REK  : "<<rek_tujuan<<endl;
						cout<<"NOMINAL : "<<jumlah_transfer<<endl;
						cout<<">> ";cin>>lanjut;
						
						if(lanjut == "Y" || lanjut == "y"){
							saldo -= jumlah_transfer;
							cout<<".:: TRANSFER BERHASIL ::."<<endl;
							cout<<"SALDO ANDA"<<endl;
							cout<<">> Rp. "<<saldo<<endl;
							cout<<"1. BACK"<<endl;
							switch(kembali){
								case 1:
									system("cls");
									goto dashboard;
									break;
								default:
									system("cls");
									cout<<"TIDAK ADA OPSI"<<endl;
									goto informasi_saldo;
									break;
							}
						}else{
							system("cls");
							goto transfer;
						}
					}
					
				}else{
					system("cls");
					cout<<"====== NO REKENING TIDAK BOLEH LEBIH/KURANG DARI 10 DIGIT ======"<<endl<<endl;
					goto bank_lain;
				}
				break;
			case 012:
				tujuan_bca:
				system("cls");
				cout<<"KODE BANK BCA"<<endl;
				system("cls");
				cout<<"KODE BANK BRI"<<endl;
				cout<<"MASUKKAN NO REK TUJUAN"<<endl;
				cout<<">> ";cin>>check;
				stringstream(check)>>rek_tujuan;
				
				if(check >= "a" && check <= "z" || check >= "A" && check <= "Z"){
					system("cls");
					cout<<"===== HARUS ANGKA ====="<<endl<<endl;
					goto tujuan_bca;
				}else if(check.length() == 10){
					system("cls");
					// masukkan jumlah nominal
					nominal_bca:
					cout<<"NOMINAL UANG "<<endl;
					cout<<">> ";cin>>jumlah_transfer; 
					
					if(jumlah_transfer >= saldo){
						system("cls");
						cout<<"====== MAAF SALDO TIDAK CUKUP ======="<<endl<<endl;
						cout<<"JUMLAH SALDO ANDA"<<endl;
						cout<<">> Rp. "<<saldo<<endl;;
						goto nominal_bca;
					}else{
						cout<<"YAKIN AKAN TRANSFER ? Y?N "<<endl;
						cout<<"BANK TUJUAN BCA"<<endl;
						cout<<"NO REK  : "<<rek_tujuan<<endl;
						cout<<"NOMINAL : "<<jumlah_transfer<<endl;
						cout<<">> ";cin>>lanjut;
						
						if(lanjut == "Y" || lanjut == "y"){
							saldo -= jumlah_transfer;
							cout<<".:: TRANSFER BERHASIL ::."<<endl;
							cout<<"SALDO ANDA"<<endl;
							cout<<">> Rp. "<<saldo<<endl;
							cout<<"1. BACK"<<endl;
							switch(kembali){
								case 1:
									system("cls");
									goto dashboard;
									break;
								default:
									system("cls");
									cout<<"====== TIDAK ADA OPSI ======"<<endl;
									goto informasi_saldo;
									break;
							}
						}else{
							system("cls");
							goto transfer;
						}
					}
					
				}else{
					system("cls");
					cout<<"====== NO REKENING TIDAK BOLEH LEBIH/KURANG DARI 10 DIGIT ======"<<endl<<endl;
					goto bank_lain;
				}
				break;
			case 108:
				tujuan_mandiri:
				system("cls");
				cout<<"KODE BANK MANDIRI"<<endl;
				system("cls");
				cout<<"KODE BANK BRI"<<endl;
				cout<<"MASUKKAN NO REK TUJUAN"<<endl;
				cout<<">> ";cin>>check;
				stringstream(check)>>rek_tujuan;
				
				if(check >= "a" && check <= "z" || check >= "A" && check <= "Z"){
					system("cls");
					cout<<"===== HARUS ANGKA ====="<<endl<<endl;
					goto tujuan_mandiri;
				}else if(check.length() == 10){
					system("cls");
					// masukkan jumlah nominal
					nominal_mandiri:
					cout<<"NOMINAL UANG "<<endl;
					cout<<">> ";cin>>jumlah_transfer; 
					
					if(jumlah_transfer >= saldo){
						system("cls");
						cout<<"====== MAAF SALDO TIDAK CUKUP ======"<<endl<<endl;
						cout<<"JUMLAH SALDO ANDA"<<endl;
						cout<<">> Rp. "<<saldo<<endl;;
						goto nominal_mandiri;
					}else{
						cout<<"YAKIN AKAN TRANSFER ? Y?N "<<endl;
						cout<<"BANK TUJUAN MANDIRI"<<endl;
						cout<<"NO REK  : "<<rek_tujuan<<endl;
						cout<<"NOMINAL : "<<jumlah_transfer<<endl;
						cout<<">> ";cin>>lanjut;
						
						if(lanjut == "Y" || lanjut == "y"){
							saldo -= jumlah_transfer;
							cout<<".:: TRANSFER BERHASIL ::."<<endl;
							cout<<"SALDO ANDA"<<endl;
							cout<<">> Rp. "<<saldo<<endl;
							cout<<"1. BACK"<<endl;
							switch(kembali){
								case 1:
									system("cls");
									goto dashboard;
									break;
								default:
									system("cls");
									cout<<"====== TIDAK ADA OPSI ======"<<endl<<endl;
									goto informasi_saldo;
									break;
							}
						}else{
							system("cls");
							goto transfer;
						}
					}
					
				}else{
					system("cls");
					cout<<"====== NO REKENING TIDAK BOLEH LEBIH/KURANG DARI 10 DIGIT ======"<<endl<<endl;
					goto bank_lain;
				}
				break;
			case 007:
				tujuan_bni:
				system("cls");
				cout<<"KODE BANK BNI"<<endl;
				cout<<"MASUKKAN NO REK TUJUAN"<<endl;
				cout<<">> ";cin>>check;
				stringstream(check)>>rek_tujuan;
				
				if(check >= "a" && check <= "z" || check >= "A" && check <= "Z"){
					system("cls");
					cout<<"===== HARUS ANGKA ====="<<endl<<endl;
					goto tujuan_bni;
				}else if(check.length() == 10){
					system("cls");
					// masukkan jumlah nominal
					nominal_bni:
					cout<<"NOMINAL UANG "<<endl;
					cout<<">> ";cin>>jumlah_transfer; 
					
					if(jumlah_transfer >= saldo){
						system("cls");
						cout<<"====== MAAF SALDO TIDAK CUKUP ======"<<endl<<endl;
						cout<<"JUMLAH SALDO ANDA"<<endl;
						cout<<">> Rp. "<<saldo<<endl;;
						goto nominal_bni;
					}else{
						cout<<"YAKIN AKAN TRANSFER ? Y?N "<<endl;
						cout<<"BANK TUJUAN BNI"<<endl;
						cout<<"NO REK  : "<<rek_tujuan<<endl;
						cout<<"NOMINAL : "<<jumlah_transfer<<endl;
						cout<<">> ";cin>>lanjut;
						
						if(lanjut == "Y" || lanjut == "y"){
							saldo -= jumlah_transfer;
							cout<<".:: TRANSFER BERHASIL ::."<<endl;
							cout<<"SALDO ANDA"<<endl;
							cout<<">> Rp. "<<saldo<<endl;
							cout<<"1. BACK"<<endl;
							cout<<">> ";cin>>kembali;
							switch(kembali){
								case 1:
									system("cls");
									goto dashboard;
									break;
								default:
									system("cls");
									cout<<"====== TIDAK ADA OPSI ======"<<endl<<endl;
									goto informasi_saldo;
									break;
							}
						}else{
							system("cls");
							goto transfer;
						}
					}
					
				}else{
					system("cls");
					cout<<"====== NO REKENING TIDAK BOLEH LEBIH/KURANG DARI 10 DIGIT ======"<<endl<<endl;
					goto bank_lain;
				}
				break;
			default:
				system("cls");
				cout<<"====== KODE BANK TIDAK ADA ====="<<endl<<endl;
				goto bank_lain;
				break;
		}
	}
	system("pause");
}


