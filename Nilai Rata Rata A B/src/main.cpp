#include <iostream>
using namespace std;

int mkA,mkB,rata;
int main(){

    cout << "Masukkan Nilai A = ";
    cin >> mkA;

    cout << "Masukkan Nilai B = ";
    cin >> mkB;

    rata = (mkA + mkB) /2;

    if(rata < 60 ){
        cout << "Tidak Lulus";
    }

    else{
        cout << "Lulus";
    }

    return 0;
}