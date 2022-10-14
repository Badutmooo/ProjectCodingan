#include <iostream>
using namespace std;

int main(){
  int dollar;
  float rupiah;

  cout << "\t Konversi Dollar($) ke Rupiah(Rp) \n\n";
  
  cout << "Masukkan Besaran Dollar : $ ";
  cin >> dollar;

  rupiah = dollar * 15352;

  cout << "\n Hasil Konversi Dollar ke Rupiah : Rp." << rupiah;

}