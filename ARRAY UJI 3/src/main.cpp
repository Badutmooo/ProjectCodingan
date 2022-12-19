#include <iostream>
// Gunakan #include <iostream.h> untuk penggunaan aplikasi borland c++
#include <conio.h>
#include <stdio.h>

using namespace std;
// Hapus Line 6 untuk penggunaan aplikasi borland c++

int main (){
  int matriks [3][2];
  int i, j;
  
  cout << "=====] Nama = Amar Kharis Alfarobi [=====" << endl;
  cout << "=====] Kelas = 1C-TT [=====" << endl;
  cout << "=====] No. Absen = 02 [=====" << endl;
  cout << "!!PROGRAM ARRAY 2 DIMENSI!!\n\n\n";
  cout << "Masukkan Data Matriks\n";

    for (i=0; i<3; i++){
    }
        for (j=0; j<2; j++){
        }
          cout << "Masukkan Nilai Matriks = ";
          cin >> matriks [i][j];
          cout << endl;



    cout << "Matriks yang Telah Diinputkan adalah = \n";
       for (i=0; i<3; i++){
       }
           for (j=0; j<2; j++){
           }
                cout << matriks [i][j];
                cout << "    ";
           cout << "\n";



getch ();
}