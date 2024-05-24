#include <iostream>
#include <vector>

using namespace std;

void generateFactorialNumber() {
  // Vector to store factorial numbers
  vector<unsigned long long> factorials(50);
  unsigned long long factorial = 1;

  cout << "Struktur Data Fibo Faktorial" << endl;

  for (int i = 1; i <= 50; ++i) {
    factorial *= i;
    factorials[i - 1] = factorial;
    cout << factorial << " , ";
  }
  cout << endl;

  // Calculate the total sum of the factorials
  unsigned long long total = 0;
  for (const auto &num : factorials) {
    total += num;
  }

  // Calculate the average
  double average = static_cast<double>(total) / factorials.size();

  // Print the total and average
  cout << "Total: " << total << endl;
  cout << "Rata-rata: " << average << endl;
}

int main() {
  generateFactorialNumber();
  return 0;
}
