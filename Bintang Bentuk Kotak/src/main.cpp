#include <iostream>
#include <conio.h>
using namespace std;

int bintang, x, y;
main ()
{
	cout << "Membuat Bintang (*) Berbentuk Kotak" << endl;
 	cout << "==========================================" << endl;
   cout << endl;

	cout << "Masukkan Banyak Bintang = ";
   cin >> bintang;
	cout << endl;

	for (x=1; x<=bintang; x++){
		for (y=1; y<=bintang; y++){
			if (x==bintang || y==bintang || y==1 || x==1){
				cout << " *";
			}
			else{
				cout << "  ";
			}
		}cout << endl;
	}

getch();
}