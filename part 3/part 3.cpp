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
	getline(cin, mhs.nim);
	cout << "Nama Mahasiswa : ";
	getline(cin, mhs.nama);
	cout << "Alamat Mahasiswa :" << endl;
	cout << "\t Nama Desa : ";
	cin >> mhs.alamat.Desa;
	cout << "\t Nama Kota : ";
	cin >> mhs.alamat.Kota;
	cout << "Umur Mahasiswa :";
	cin >> mhs.umur;
