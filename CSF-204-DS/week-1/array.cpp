#include <iostream>

using namespace std;

int main() {
  int i, j;
  int arr[5];

  cout << "STRUKTUR DATA ARRAY" << endl;

  for (i = 0; i < 5; i++) {
    cout << "masukan data ke: " << i << " : ";
    cin >> arr[i];
  }

  cout << "HASIL" << endl;

  for (j = 0; j < 5; j++) {
    cout << "tampilan data ke: " << j << " = " << arr[j] << endl;
  }

  return 0;
}
