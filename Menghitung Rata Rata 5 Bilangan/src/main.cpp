#include <iostream>
using namespace std;

int main (){
  int data;
  float nilai, jumlah, rata_rata;

  cout << "\t Menghitung Rata-rata 5 Bilangan \n\n";
  cout << "Masukkan Jumlah Data : "; cin >> data;

  for(int i = 1; i <= data; i++)
  {

    cout << "Data Nilai Ke-" << i << " : ";
    cin >> nilai;

    jumlah += nilai;
}

cout << "\n Jumlah semua nilainya : " << jumlah;

rata_rata = jumlah / data;
cout << "\n Nilai Rata-ratanya adalah : ";
}
