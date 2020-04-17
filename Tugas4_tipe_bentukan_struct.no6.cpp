#include <iostream>
#include <string.h>
#include<stdio.h>
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
	mahasiswa.nim=1302019;
	mahasiswa.nama="Budi";
	mahasiswa.fakultas="ilmu komputer";
	mahasiswa.tinggal.kota="Makassar";
	mahasiswa.tinggal.alamat_kota="Jln. Perintis";
	cout<<"Data Mahasiswa : "<<endl;
	cout<<mahasiswa.nama<<","<<mahasiswa.nim<<","<<mahasiswa.fakultas<<endl;
	cout<<"Alamat mahasiswa : "<<endl;
	cout<<mahasiswa.tinggal.kota<<","<<mahasiswa.tinggal.alamat_kota;
	return 0;
	
}

