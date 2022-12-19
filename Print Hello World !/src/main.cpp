#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int i, n;
	system ("color f0");
	cout << "\tProgram Perulangan Hello World 5 Kali" << endl;
	for (i=1, n=5; n>0; i++, n--){
		cout << i << ". Hello World!" << endl;
	}
}