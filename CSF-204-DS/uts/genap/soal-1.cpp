#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void searchLetterInNames() {
  vector<string> array = {"Anton", "Yusuf", "Azzah", "Jojon", "Yunarso",
                          "Naura", "Ester", "Yunus", "Aisyah"};
  vector<int> answers;
  vector<string> names;
  for (size_t i = 0; i < array.size(); ++i) {
    const string &name = array[i];
    if (name.length() > 1 && name[0] == 'Y' && name[1] == 'u') {
      answers.push_back(i);
      names.push_back(name);
    }
  }

  cout << "Isi data array: " << endl;
  cout << "Index: \t";
  for (size_t i = 0; i < array.size(); ++i) {
    cout << i << "\t";
  }

  cout << endl;
  cout << "Data: \t";

  for (size_t i = 0; i < array.size(); ++i) {
    cout << array[i] << "\t";
  }

  cout << endl;
  cout << endl;
  cout << "Data yang dicari huruf ke 3 dan 4 adalah: Yu*" << endl;
  for (size_t i = 0; i < names.size(); ++i) {
    cout << names[i] << "  ";
  }

  cout << endl;
  cout << endl;
  cout << "data ditemukan pada index ";
  for (size_t i = 0; i < answers.size(); ++i) {
    cout << answers[i];
    if (i < answers.size() - 1) {
      cout << ", ";
    }
  }

  cout << endl;
}
int main() {
  searchLetterInNames();
  return 0;
}
