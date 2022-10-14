#include <iostream>

using namespace std;

const double phi = 3.14;

double hitungL(double r){
  double L = phi * (r * r);
  return L;
}

double hitungK(double r){
  double d = 2 * r;
  double K = phi * d;
  return K;
}

void tampilL(double r){
  double L = hitungL(r);
  cout << "Luas : "<<endl;
  cout << "L \t= phi x ( r x r )" << endl;
  cout << "L \t= "<< phi << " x ( " << r << " x " << r <<" )"<<endl;
  cout << "L \t= "<<L<<endl;
}

void tampilK(double r){
  double K = hitungK(r);
  double d = 2 * r;
  cout << "Keliling : " << endl;
  cout << "K \t= phi x d" << endl;
  cout << "K \t= " << phi << " x " <<d<< endl;
  cout << "K \t= " <<K;

}

int main(){
  //L = phi x r x r
  //K = phi x d
  double r;
  cout << "Masukkan r : "; cin >> r;
  tampilL(r);
  tampilK(r);
}
