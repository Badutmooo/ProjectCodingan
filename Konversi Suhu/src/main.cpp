#include <iostream>
using namespace std;

double hitungR(double c){
  double r = c * 4 / 5;
  return r;
}

double hitungK(double c){
  double k = c + 273;
  return k;
}

double hitungF (double c){
  double f = (c * 9 / 5) + 32;
  return f;
}

void tampilKoversi(double c){
  double r, f, k;
  r= hitungR(c);
  f= hitungF(c);
  k= hitungK(c);

  cout << c << " Derajat celcius = " << endl;
  cout << r << " Derajat Reamur = " << endl;
  cout << f << " Derajat Fahrenheit = " << endl;
  cout << k << " Derajat Kelvin = " << endl;
}

int main (){
  double c, r, f, k;
  string lanjut;
  do{
  cout << "Konversi Suhu" << endl;
  cout << "Masukkan Suhu Celcius : "; cin>>c;
  tampilKoversi(c);
  cout << "lanjut <y/n> : "; cin >> lanjut;
} while (lanjut == "y");
cout << "Program Selesai" << endl;

}
