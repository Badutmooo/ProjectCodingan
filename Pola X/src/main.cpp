#include <iostream>
using namespace std;
int i, j, n;

main (){

	cout << "Masukkan n  : ";
	cin >> n;
	for (i = 1; i<=n ; i++) {
		for (j = 1 ; j<= n ; j++){
			if (i == j || i+j == n+`){
				cout << "* ";
			}
		}
		}
		cout << " *  ";

	}