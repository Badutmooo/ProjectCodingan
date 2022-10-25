#include <iostream>
using namespace std;

int nilaiA, nilaiB;

int main(){
    cout << "Masukkan Nilai A : ";
    cin >> nilaiA;

    cout << "Masukkan Nilai B : ";
    cin >> nilaiB;

    if (nilaiA > nilaiB){
        cout << "Nilai Max = " << nilaiA;
    }
    else{
        cout << "Nilai Max = " << nilaiB;
    }

    cout << "===Codingan Selesai===";


    return 0;
}

