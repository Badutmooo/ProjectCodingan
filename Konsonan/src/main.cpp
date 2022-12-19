#include <iostream>
// Gunakan #include <iostream.h> untuk penggunaan aplikasi borland c++
#include <conio.h>
#include <string.h>

using namespace std;
// Hapus Line 6 untuk penggunaan aplikasi borland c++

main(){

    int x;
    int a=0, i=0, u=0, e=0, o=0;
    int jv, jk;
    int konsonan=0, angka=0;
    char kata[50];

  cout << "=====] Nama = Amar Kharis Alfarobi [=====" << endl;
  cout << "=====] Kelas = 1C-TT [=====" << endl;
  cout << "=====] No.Absen = 2 [=====" << endl;
  cout << endl;

 cout << "Masukkan Kalimat yang Diinginkan = ";
    cin.getline(kata, sizeof(kata));
    for(x=0; x< strlen(kata); x++)
    {
        if(kata[x]=='a'){a++;}
        else
        if(kata[x]=='i'){i++;}
        else
        if(kata[x]=='u'){u++;}
        else
        if(kata[x]=='e'){e++;}
        else
        if(kata[x]=='o'){o++;}
        else


      if(kata[x]=='b'){konsonan++;}
      if(kata[x]=='c'){konsonan++;}
      if(kata[x]=='d'){konsonan++;}
      if(kata[x]=='f'){konsonan++;}
      if(kata[x]=='g'){konsonan++;}
      if(kata[x]=='h'){konsonan++;}
      if(kata[x]=='j'){konsonan++;}
      if(kata[x]=='k'){konsonan++;}
      if(kata[x]=='l'){konsonan++;}
      if(kata[x]=='m'){konsonan++;}
      if(kata[x]=='n'){konsonan++;}
      if(kata[x]=='p'){konsonan++;}
      if(kata[x]=='q'){konsonan++;}
      if(kata[x]=='r'){konsonan++;}
      if(kata[x]=='s'){konsonan++;}
      if(kata[x]=='t'){konsonan++;}
      if(kata[x]=='v'){konsonan++;}
      if(kata[x]=='w'){konsonan++;}
      if(kata[x]=='x'){konsonan++;}
      if(kata[x]=='y'){konsonan++;}
      if(kata[x]=='z'){konsonan++;}
    }
    cout << endl;

    jv = a + i + u + e + o;
    	cout << "Jumlah Huruf Vokal = " << jv << endl;

    jk = konsonan;
    	cout << "Jumlah Huruf Konsonan = " << jk << endl;

getch();
}