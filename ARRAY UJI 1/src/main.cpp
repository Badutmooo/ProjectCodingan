#include <iostream>
// Gunakan #include <iostream.h> untuk penggunaan aplikasi borland c++
#include <conio.h>

using namespace std;
// Hapus Line 5 untuk penggunaan aplikasi borland c++

int main (){
  int x, y;
  int nilai [6];

  cout << "=====] Nama = Amar Kharis Alfarobi [=====" << endl;
  cout << "=====] Kelas = 1C-TT [=====" << endl;
  cout << "=====] No. Absen = 02 [=====" << endl;
  
  cout << "!!!PROGRAM ARRAY 1 DIMENSI!!!";
  cout << endl;
  cout << "Masukkan Data Array" << endl;

     for (x=1; x<=6; x++){
         cout << "Data ke- " << x << " = ";
         cin >> nilai [x];
     }

     cout << "Data Array yang Telah Dimasukkan" << endl;

     for (y=1; y<=6; y++){
     cout << "Data Ke- " << y << " = ";
     cout << nilai [y] << endl;
     }


getch ();
}