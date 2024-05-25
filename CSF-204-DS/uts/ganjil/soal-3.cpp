#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
  if (num <= 1)
    return false;
  if (num <= 3)
    return true;
  if (num % 2 == 0 || num % 3 == 0)
    return false;
  for (int i = 5; i <= sqrt(num); i += 6) {
    if (num % i == 0 || num % (i + 2) == 0)
      return false;
  }
  return true;
}

int main() {
  vector<int> primes;
  int count = 0;
  int number = 2; // Starting number to check for prime

  // Generate first 50 prime numbers
  while (count < 50) {
    if (isPrime(number)) {
      primes.push_back(number);
      count++;
    }
    number++;
  }

  // Calculate total and average
  int total = accumulate(primes.begin(), primes.end(), 0);
  double average = static_cast<double>(total) / primes.size();

  // Print the primes
  cout << "Sederetan Data Bilangan Prima:" << endl;
  for (int i = 0; i < primes.size(); ++i) {
    cout << primes[i];
    if (i < primes.size() - 1) {
      cout << ", ";
    }
  }
  cout << endl;

  // Print total and average
  cout << "Total: " << total << endl;
  cout << "Rata-rata: " << average << endl;

  return 0;
}
