#include <iostream>
/* #include <windows.h> */
#include <iomanip>

using namespace std;

/* int main() { */
/*   int n; */
/*   cout << "Enter the size of the matrix: "; */
/*   cin >> n; */
/*   int matrix[n][n]; */
/*   cout << "Enter the elements of the matrix: "; */
/*   for (int i = 0; i < n; i++) { */
/*     for (int j = 0; j < n; j++) { */
/*       cin >> matrix[i][j]; */
/*     } */
/*   } */
/*   cout << "The matrix is: " << endl; */
/*   for (int i = 0; i < n; i++) { */
/*     for (int j = 0; j < n; j++) { */
/*       cout << matrix[i][j] << " "; */
/*     } */
/*     cout << endl; */
/*   } */
/**/
/*   return 0; */
/* } */

// matrix multiplication
int main() {
  int n;
  int m;

  // get the size of the matrix from user
  cout << "Masukan baris matrix:";
  cin >> n;
  cout << "masukan kolom matrix:";
  cin >> m;

  int matrix1[n][m], matrix2[n][m], result[n][m];

  cout << "Masukan elemen matrix pertama: " << endl;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "masukan elemen baris: " << i + 1 << " kolom: " << j + 1
           << " => ";
      cin >> matrix1[i][j];
    }
  }

  // second matrix user input
  cout << "masukan elemen matrix kedua: " << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "masukan elemen baris: " << i + 1 << " kolom: " << j + 1
           << " => ";
      cin >> matrix2[i][j];
    }
  }

  // matrix addition
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      result[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  // Show the result
  cout << "The result of matrix addition is:" << endl;
  int maxWidth = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int width = to_string(result[i][j]).length();
      if (width > maxWidth)
        maxWidth = width;
    }
  }

  // Output each element with consistent spacing
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << setw(maxWidth) << result[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
