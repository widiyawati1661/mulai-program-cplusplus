#include <iostream>
using namespace std;

int pilihan, ukuran, tema;
string text;

int main(){
	cout << "Aplikasi OLshop MOMI 2019\n";
	cout << "Selamat datang di OLshop MOMI !\n ";
	cout << "1. Greeting cards \n 2. Wrapping paper \n 3. Paperbag \n";
	
	ulangi:
		
	cout << "Masukkan Pilihan Anda: ";	cin >> pilihan;
	
	switch(pilihan){
		case 1:
			text="Anda memilih Greeting cards";
		break;
		case 2:
			text="Anda memilih Wrapping paper";
		break;
		case 3:
			text="Anda memilih Paperbag"; 
		break;
		}
	cout << text;
	
	cout <<"\nSilahkan pilih barang pesanan anda";
	
	cout <<"\nIsi disini\n";
	cout <<" 1. Large\n 2. Medium\n 3. Small\n";
		
	cout<<"Masukkan Pilihan Anda: ";	cin >> ukuran;
	
	switch(ukuran){
		case 1:
			text="Size Large";
		break;
		case 2:
			text="Size Medium";
		break;
		case 3:
			text="Size Small";
		break;
		}
	cout << text;
	
	cout <<"\nIsi disini\n";
	cout <<" 1. Birthday\n 2. Wedding\n 3. Newborn\n";
		
	cout<<"Masukkan Pilihan Anda: ";	cin >> tema;
	
	switch(tema){
		case 1:
			text="Tema Birthday";
		break;
		case 2:
			text="Tema Wedding";
		break;
		case 3:
			text="Tema Newborn";
		break;
		}
	cout << text;
	
	cout << "\nTerimakasih telah berkunjung !";
}
