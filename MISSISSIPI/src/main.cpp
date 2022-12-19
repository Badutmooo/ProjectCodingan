#include <iostream>
// Gunakan #include <iostream.h> untuk penggunaan aplikasi borland c++
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;
// Hapus Line 6 untuk penggunaan aplikasi borland c++

int main (void){
char word [] = "MISSISSIPI";
int m_count = 0, i_count = 0, s_count = 0;

cout << "=====] Nama = Amar Kharis Alfarobi [=====" << endl;
cout << "=====] Kelas = 1C-TT [=====" << endl;
cout << "=====] No. Absen = 02 [=====" << endl;
cout << endl;

// Menghitung jumlah kemunculan masing-masing huruf
for(int i=0; i<strlen(word); i++){
    if(word[i]=='M'){
    m_count++;
}

else if (word[i] == 'I'){
    i_count++;
}

    else if(word[i]=='S'){
    s_count++;
}

}
printf("JumlahhurufM:%d\n",m_count);
printf("JumlahhurufI:%d\n",i_count);
printf("JumlahhurufS:%d\n",s_count);

getch ();
}
