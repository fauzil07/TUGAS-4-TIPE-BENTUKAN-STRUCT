#include <iostream>
#include <string.h>
using namespace std;

struct Data_mahasiswa{
	long int nim;
	string nama;
	string fakultas;
	};
	Data_mahasiswa mahasiswa1,mahasiswa2;
int main(){
	mahasiswa1.nim=1302019;
	mahasiswa1.nama="budi";
	mahasiswa1.fakultas="ilmu komputer";
	
	mahasiswa2.nim=1302018;
	mahasiswa2.nama="tono";
	mahasiswa2.fakultas="ilmu komputer";
	
	cout<<"Data Mahasiswa 1 : "<<endl;
	cout<<mahasiswa1.nama<<","<<mahasiswa1.nim<<","<<mahasiswa1.fakultas<<endl;
	cout<<"Data Mahasiswa 2 : "<<endl;
	cout<<mahasiswa2.nama<<","<<mahasiswa2.nim<<","<<mahasiswa2.fakultas<<endl;
}

