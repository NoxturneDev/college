#include <iostream>
#include <vector>
using namespace std;

vector<int> exchangeSort(vector<int> arr) {
  vector<int> sortedArr = arr; // Copy the original array
  int n = sortedArr.size();
  for (int i = 0; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (sortedArr[i] > sortedArr[j]) {
        // Swap sortedArr[i] and sortedArr[j]
        int temp = sortedArr[i];
        sortedArr[i] = sortedArr[j];
        sortedArr[j] = temp;
      }
    }
  }
  return sortedArr;
}

// Function to perform partition for quicksort in descending order
int partition(vector<int> &arr, int low, int high) {
  int pivot = arr[high];
  int i = low - 1;

  for (int j = low; j < high; ++j) {
    if (arr[j] > pivot) {
      ++i;
      // Swap arr[i] and arr[j]
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }

  // Swap arr[i + 1] and arr[high] (or pivot)
  int temp = arr[i + 1];
  arr[i + 1] = arr[high];
  arr[high] = temp;

  return i + 1;
}

// Function to perform quicksort in descending order
void quickSort(vector<int> &arr, int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);

    // Recursively sort elements before partition and after partition
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

// Function to perform quicksort in descending order and return the sorted array
vector<int> quickSortDescending(vector<int> arr) {
  vector<int> sortedArr = arr; // Copy the original array
  quickSort(sortedArr, 0, sortedArr.size() - 1);
  return sortedArr;
}

void printArray(vector<int> arr, int n) {
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }

  cout << endl;
}

int main() {
  vector<int> arr1 = {23, 10, 9, 12, 15, 20};
  vector<int> arr2 = {23, 10, 9, 12, 15, 20};

  cout << "Data Sebelum diurutkan: ";
  printArray(arr1, 5);

  cout << "Data Setelah disort secara" << endl;
  cout << "Metode Exchange sort secara Ascending: ";
  vector<int> sortedArr1 = exchangeSort(arr1);
  printArray(sortedArr1, sortedArr1.size());

  cout << "Data Setelah disort secara" << endl;
  cout << "Metode Quciksort sort secara Descending: ";
  vector<int> sortedArr2 = quickSortDescending(arr2);
  printArray(sortedArr2, sortedArr2.size());

  return 0;
}
