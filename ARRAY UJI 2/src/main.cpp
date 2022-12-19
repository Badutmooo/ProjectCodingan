#include <iostream>
// Gunakan #include <iostream.h> untuk penggunaan aplikasi borland c++
#include <stdio.h>
#include <conio.h>

using namespace std;
// Hapus Line 6 untuk penggunaan aplikasi borland c++

main (){

int A[6],B[6];
int x;
int i=1;

cout << "=====] Nama = Amar Kharis Alfarobi [=====" << endl;
cout << "=====] Kelas = 1C-TT [=====" << endl;
cout << "=====] No.Absen = 02 [=====" << endl;
cout << endl;

   cout <<"++PROGRAM ARRAY 1 DIMENSI++\n\n\n";
   cout <<"MASUKKAN DATA ARRAY\n";

//mengisi data array A
for(x=1; x<=6; x++){
    cout <<"MASUKKAN DATA KE-" << x << " = ";
    cin >> A[x];
    i++;
}

cout <<"\n";
cout <<"DATA ARRAY YANG DIMASUKKAN/n";
cout << endl;

   //mengisi data array B dari array A mulai dari indeks paling akhir
for(x=1; x<=6; x++){
B[(6+1)-x]=A[x];
}

for(x=1; x<=6; x++){
    cout <<"DATA A KE-" << x << "=" << A[x] << " ";
    cout <<"DATA B KE-" << x << "=" << B[x] <<endl;
 }

getch();
}