
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// Struct
struct Anggota {
  string nama;
  string NIM;
  string predikat;
  float nilai;
};

// Fungsi untuk mengecek predikat
string predikat(float nilai) {
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

int totalNilaiA(Anggota *arr[]) {
  int total = 0;

  for (int i = 0; i < 3; i++) {
    if (arr[i]->predikat == "Sangat Memuaskan") {
      total++;
    }
  }

  return total;
}

int totalNilaiB(Anggota *arr[]) {
  int total = 0;

  for (int i = 0; i < 3; i++) {
    if (arr[i]->predikat == "Memuaskan") {
      total++;
    }
  }

  return total;
}

int totalNilaiC(Anggota *arr[]) {
  int total = 0;
  for (int i = 0; i < 3; i++) {
    if (arr[i]->predikat == "Cukup") {
      total++;
    }
  }
  return total;
}

int main() {
  int jumlahAnggota = 3;

  Anggota kelompok[jumlahAnggota];

  for (int i = 0; i < jumlahAnggota; ++i) {
    cout << "Masukkan Nama Anggota " << i + 1 << ": ";
    getline(cin, kelompok[i].nama);

    cout << "Masukkan NIM Anggota " << i + 1 << ": ";
    cin >> kelompok[i].NIM;

    cout << "Masukkan Nilai Tugas 1 Anggota " << i + 1 << ": ";
    cin >> kelompok[i].nilai;

    kelompok[i].predikat = predikat(kelompok[i].nilai);

    cout << endl;
    cin.ignore();
  }

  cout << setw(10) << "No" << setw(10) << "Nama" << setw(15) << "NIM";
  cout << setw(20) << "Nilai" << setw(20) << "Predikat" << endl;
  cout << setfill('=') << setw(90) << "" << setfill(' ') << endl;

  for (int i = 0; i < jumlahAnggota; ++i) {
    cout << setw(10) << i + 1 << ". " << setw(10) << kelompok[i].nama
         << setw(15) << kelompok[i].NIM << setw(20) << kelompok[i].nilai
         << setw(20) << kelompok[i].predikat << endl;
  }

  Anggota *pointers[jumlahAnggota];
  for (int i = 0; i < jumlahAnggota; ++i) {
    pointers[i] = &kelompok[i];
  }

  int totalA = totalNilaiA(pointers);
  int totalB = totalNilaiB(pointers);
  int totalC = totalNilaiC(pointers);

  cout << "Total yang mendapat predikat Sangat Memuaskan: " << totalA << endl;
  cout << "Total yang mendapat predikat Memuaskan: " << totalB << endl;
  cout << "Total yang mendapat predikat Cukup: " << totalC;

  return 0;
}
