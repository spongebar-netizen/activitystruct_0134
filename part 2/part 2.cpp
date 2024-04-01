#include <iostream>
using namespace std;

struct DetailAlamat {

	string Desa;
	string Kota;

};

struct Mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;

};

int main() {
	Mahasiswa mhs;
	cout << "Nomor Mahasiswa :";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa : ";
	cin >> mhs.nama;
	cout << "Alamat Mahasiswa :" << endl;
	cout << "\t Nama Desa : ";
	cin >> mhs.alamat.Desa;
	cout << "\t Nama Kota : ";
	cin >> mhs.alamat.Kota;
	cout << "Umur Mahasiswa :";
	cin >> mhs.umur;

	cout << endl;
	cout << "\n Nim : " << mhs.nim;
	cout << "\n Nama : " << mhs.nama;
	cout << "\t \n Desa : " << mhs.alamat.Desa;
	cout << "\n Kota : " << mhs.alamat.Kota;
	cout << "\n Umur : " << mhs.umur;

}