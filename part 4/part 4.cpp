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
	Mahasiswa mhs[3];
	for (int i = 0; i < 3; i++) {
		cout << "Data ke-" << (i + 1) << ":" << endl;
		cout << "Nomor Mahasiswa :";
		getline(cin, mhs[i].nim);
		cout << "Nama Mahasiswa : ";
		getline(cin, mhs[i].nama);
		cout << "Alamat Mahasiswa :" << endl;
		cout << "\t Nama Desa : ";
		cin >> mhs[i].alamat.Desa;
		cout << "\t Nama Kota : ";
		cin >> mhs[i].alamat.Kota;
		cout << "Umur Mahasiswa :";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
		cout << endl;
	}

	for (int i = 0; i < 3; i++) {
		cout << endl;
		cout << "Data Mahasiswa ke-" << (i + 1) << ":" << endl;
		cout << "\n Nim : " << mhs[i].nim;
		cout << "\n Nama : " << mhs[i].nama;
		cout << "\t \n Desa : " << mhs[i].alamat.Desa;
		cout << "\t \n Kota : " << mhs[i].alamat.Kota;
		cout << "\n Umur : " << mhs[i].umur;
	}
}
