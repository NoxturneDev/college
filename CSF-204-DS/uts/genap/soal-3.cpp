#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// Definisikan struktur untuk menyimpan informasi anggota kelompok
struct AnggotaKelompok {
  string nama;
  string NIM;
  float nilai;
  string predikat;
};

// Fungsi untuk menghitung nilai rata-rata
string checkPredikat(float nilai) {
  if (nilai > 88 && nilai <= 100) {
    return "Sangat Memuaskan";
  } else if (nilai > 76 && nilai <= 87) {
    return "Memuaskan";
  } else if (nilai > 59 && nilai <= 75) {
    return "Cukup";
  } else {
    return "Kurang";
  }
}

int main() {
  // Deklarasi variabel array dari struktur AnggotaKelompok
  int jumlahAnggota = 3; // Misalnya kita punya 3 anggota kelompok

  AnggotaKelompok kelompok[jumlahAnggota];

  // Memasukkan data untuk setiap anggota kelompok
  for (int i = 0; i < jumlahAnggota; ++i) {
    cout << "Masukkan Nama Anggota " << i + 1 << ": ";
    getline(cin, kelompok[i].nama);

    cout << "Masukkan NIM Anggota " << i + 1 << ": ";
    cin >> kelompok[i].NIM;

    cout << "Masukkan Nilai Tugas 1 Anggota " << i + 1 << ": ";
    cin >> kelompok[i].nilai;

    // check predikat
    kelompok[i].predikat = checkPredikat(kelompok[i].nilai);

    cout << endl;
    cin.ignore(); // Membersihkan input buffer
  }

  // Menampilkan informasi anggota kelompok dalam bentuk tabel
  cout << setw(10) << "No";
  cout << setw(10) << "Nama" << setw(15) << "NIM";
  cout << setw(20) << "Nilai" << setw(20) << "Predikat" << endl;
  cout << setfill('=') << setw(90) << "" << setfill(' ') << endl;
  for (int i = 0; i < jumlahAnggota; ++i) {
    cout << setw(10) << i + 1 << ". " << i << setw(10) << kelompok[i].nama
         << setw(15) << kelompok[i].NIM << setw(20) << kelompok[i].nilai
         << setw(20) << kelompok[i].predikat << endl;
  }

  return 0;
}
