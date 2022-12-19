#include <iostream>
using namespace std;

int main (){
	int a, b, i, j, k, p;
	cout << "\t Program Deret Angka 2 Langkah n kali" << endl;
	cout << "Masukkan Banyaknya Bilangan Deret = "; cin >> i;
	for (p=1, a=0, j=0, k=1; j<i; j++){
		if (j % 2 == 0){
			cout << p << " ";
			p = p + (8 * k);
			k++;
		}
		else if (j % 2 == 1){
			a = a + 4;
			cout << a << " ";
		}
	}
}