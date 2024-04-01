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