#include <iostream> //standar-input-output stream header = untuk operasi yang digunakan ex; cin, cout & endl.
#include <conio.h> // untuk tampilkan antarmuka ke pengguna ex; getch().

using namespace std;

int main()

{
	
	string user, pass; //user dan pass = string
	
	cout<<"Masukkan UserName : "; cin>>user; //fungsi cout = keluaran, fungsi cin = inputan
	cout<<"Masukkan Password : "; cin>>pass;
	
	if(user == "widiya" && pass == "indonesia")
	{
		cout<<"Login Sukses"<<endl; //endl = pindah baris
	}
	
	else
	{
		cout<<"Login Gagal";
	}
	
	getch;
	
	return 0;
}
