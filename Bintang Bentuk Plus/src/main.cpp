#include <iostream>
#include <conio.h>
using namespace std;

main (){
	int x, i, j;
	cout << "Membuat Bintang (*) Berbentuk Plus (+)" << endl;
   cout << "=================" << endl;

	cout << "Masukkan x = ";
   cin >> x;
   cout << endl;
   
		for (i=1; i<=x; i++){
			for (j=1; j<=x; j++){
				if (i==(x + 1) / 2 || j==(x + 1) / 2){
					cout << " *";
            }
				else{
					cout << "  ";
            }
			}
         cout << endl;
		}	
getch();
}