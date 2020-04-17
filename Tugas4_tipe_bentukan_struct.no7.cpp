#include <iostream>
#include <string.h>
using namespace std;

struct alamat{
	string kota;
	string alamat_kota;
};
struct Data_mahasiswa{
	long int nim;
	string nama;
	string fakultas;
	alamat tinggal;
};
Data_mahasiswa mahasiswa;
int main(){	
	cout<<"Masukkan nim : ";
	cin>>mahasiswa.nim;
	cout<<"Masukkan nama : ";
	cin>>mahasiswa.nama;
	cout<<"Masukkan fakultas : ";
	cin>>mahasiswa.fakultas;
	cout<<"Masukkan Tempat tinggal : ";
	cin>>mahasiswa.tinggal.kota;
	cout<<"Masukkan Alamat : ";
	cin>>mahasiswa.tinggal.alamat_kota;
	cout<<"Data Mahasiswa "<<endl;
	cout<<"Nama : "<<mahasiswa.nama<<endl;
	cout<<"Nim : "<<mahasiswa.nim<<endl;
	cout<<"Fakultas : "<<mahasiswa.fakultas<<endl;
	cout<<"Alamat mahasiswa "<<endl;
	cout<<"Kota : "<<mahasiswa.tinggal.kota<<endl;
	cout<<"Alamat di kota : "<<mahasiswa.tinggal.alamat_kota<<endl;
	return 0;	
}



