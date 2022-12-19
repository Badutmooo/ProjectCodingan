#include <iostream>
#include <conio.h>
using namespace std;

int i,x;

main (){

    int nilai [] = {70,80,50,90,60};
    
    for (x = 0 ; x<= 4 ; x++) {
        cout << "masukkan nilai 1 = ";
        cin >> nilai [x];
    }

    for (i = 0 ; i<=4 ; i++){
        cout << nilai [i] << endl;
    }


}