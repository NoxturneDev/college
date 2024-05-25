#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }

  cout << endl;
}

void insertionSortAscending(int arr[], int n) {
  for (int i = 1; i < n; ++i) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      --j;
    }

    arr[j + 1] = key;
  }
}

void selectionSortDescending(int arr[], int size) {
  for (int i = 0; i < size - 1; ++i) {
    // Find the maximum element in the unsorted portion of the array
    int maxIndex = i;
    for (int j = i + 1; j < size; ++j) {
      if (arr[j] > arr[maxIndex]) {
        maxIndex = j;
      }
    }
    // Swap the found maximum element with the first element of the unsorted
    // portion
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[i];
    arr[i] = temp;
  }
}

int main() {
  int arr1[7] = {25, 10, 7, 12, 12, 8, 20};
  int arr2[7] = {25, 10, 7, 12, 12, 8, 20};

  cout << "Data Sebelum diurutkan: ";
  printArray(arr1, 5);

  cout << "Data Setelah disort secara" << endl;
  cout << "Metode Insertion sort secara Ascending: ";
  insertionSortAscending(arr1, 5);
  printArray(arr1, 5);

  cout << "Data Setelah disort secara" << endl;
  cout << "Metode selection sort secara Descending: ";
  selectionSortDescending(arr2, 5);
  printArray(arr2, 5);

  return 0;
}
