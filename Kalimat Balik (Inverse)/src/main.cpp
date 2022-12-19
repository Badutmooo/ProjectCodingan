#include <iostream>
// Gunakan #include <iostream.h> untuk penggunaan aplikasi borland c++
#include <conio.h>
#include <string.h>

using namespace std;
// Hapus Line 5 untuk penggunaan aplikasi borland c++


int main(){

 	char kalimat[100];

   cout << "=====] Nama =  [=====" << endl;
   cout << "=====] Kelas = 1C-TT [=====" << endl;
   cout << "=====] No.Absen = 2 [=====" << endl;
   cout << endl;

   cout <<"!!PROGRAM KALIMAT TERBALIK [REVERSED WORD]!!" << endl;
   cout<< "Masukkan Kalimat yang Ingin Dibalik = ";
   cin.getline (kalimat , sizeof (kalimat) );
   cout << endl;

   cout << "Kalimat terbalik = ";

   int x = strlen(kalimat);
 	for(int i=x-1; i>=0; i--){
  		cout << kalimat[i];
 	}

   cout << endl;

getch();
}
