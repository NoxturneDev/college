
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// Struct data
struct Members {
  string nama;
  string NIM;
  string predicate;
  float quiz;
};

// Fungsi untuk mengecek predicate
string getPredicate(float quiz) {
  if (quiz > 88 && quiz <= 100) {
    return "Cumlaude";
  } else if (quiz > 76 && quiz <= 87) {
    return "Memuaskan";
  } else {
    return "Cukup";
  }
}

// Get all the total of each predicate
int getTotalCumlaudePredicate(Members *arr[]) {
  int total = 0;

  for (int i = 0; i < 3; i++) {
    if (arr[i]->predicate == "Cumlaude") {
      total++;
    }
  }

  return total;
}

int getTotalMemuaskanPredicate(Members *arr[]) {
  int total = 0;

  for (int i = 0; i < 3; i++) {
    if (arr[i]->predicate == "Memuaskan") {
      total++;
    }
  }

  return total;
}

int getTotalCukupPredicate(Members *arr[]) {
  int total = 0;

  for (int i = 0; i < 3; i++) {
    if (arr[i]->predicate == "Cukup") {
      total++;
    }
  }

  return total;
}

int main() {
  int totalMembers = 3;

  Members kelompok[totalMembers];

  for (int i = 0; i < totalMembers; ++i) {
    cout << "Masukkan Nama Anggota " << i + 1 << ": ";
    getline(cin, kelompok[i].nama);

    cout << "Masukkan NIM Anggota " << i + 1 << ": ";
    cin >> kelompok[i].NIM;

    cout << "Masukkan quiz Tugas 1 Anggota " << i + 1 << ": ";
    cin >> kelompok[i].quiz;

    kelompok[i].predicate = getPredicate(kelompok[i].quiz);

    cout << endl;
    cin.ignore();
  }

  cout << setw(10) << "No" << setw(20) << "Nama" << setw(20) << "NIM";
  cout << setw(20) << "Quiz" << setw(20) << "predicate" << endl;
  cout << setfill('=') << setw(100) << "" << setfill(' ') << endl;

  for (int i = 0; i < totalMembers; ++i) {
    cout << setw(10) << i + 1 << ". " << setw(20) << kelompok[i].nama
         << setw(20) << kelompok[i].NIM << setw(20) << kelompok[i].quiz
         << setw(20) << kelompok[i].predicate << endl;
  }

  Members *arrPointers[totalMembers];
  for (int i = 0; i < totalMembers; ++i) {
    arrPointers[i] = &kelompok[i];
  }

  int totalCumlaudePredicate = getTotalCumlaudePredicate(arrPointers);
  int totalMemuaskanPredicate = getTotalMemuaskanPredicate(arrPointers);
  int totalCukupPredicates = getTotalCukupPredicate(arrPointers);

  cout << "Total yang mendapat predikat Cumlaude: " << totalCumlaudePredicate
       << endl;
  cout << "Total yang mendapat predikat Memuaskan: " << totalMemuaskanPredicate
       << endl;
  cout << "Total yang mendapat predikat Cukup: " << totalCukupPredicates
       << endl;

  return 0;
}
