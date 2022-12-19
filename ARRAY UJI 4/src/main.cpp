#include <iostream>
// Gunakan #include <iostream.h> untuk penggunaan aplikasi borland c++
#include <conio.h>
#include <stdio.h>

using namespace std;
// Hapus Line 6 untuk penggunaan aplikasi borland c++

int main (){
   int matriks_a[3][2];
   int matriks_b[3][2];
   int matriks_hasil[3][2];
   int i, j;
    
    cout << "=====] Nama = Brian Seysar Orlando [=====" << endl;
    cout << "=====] Kelas = 1C-TT [=====" << endl;
    cout << "=====] No. Absen = 05 [=====" << endl;
    cout << "=== PROGRAM PENJUMLAHAN DUA MATRIKS ===\n\n\n";
    cout << "Masukkan Data Matriks A\n";

      for (i=0; i<3; i++){
      }
          for (j=0; j<2; j++){
          }
             cout << "Masukkan Nilai Matriks = ";
             cin >> matriks_a[i][j];
             cout << endl;

      for (i=0; i<3; i++){
      }
          for (j=0; j<2; j++){
          }
             cout << "Masukkan Nilai Matriks = ";
             cin >> matriks_b[i][j];
             cout << endl;

      for (i=0; i<3; i++){
      }
          for (j=0; j<2; j++){
          }
          matriks_hasil [i][j] = matriks_a[i][j] + matriks_b[i][j];

      cout << "\nMatriks Hasil Penjumlahan adalah = \n";
      for (i=0; i<3; i++){
      }
          for (j=0; j<2; j++){
          }
              cout << matriks_hasil[i][j];
              cout << "\n";

getch ();
}

