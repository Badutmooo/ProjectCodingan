#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    float e1, e2, e3, ne1, ne2, RPE, RPNE;

    cout << "!-!Program Pemilihan Jurusan IPA dan IPS!-!" << endl;
    cout << endl;
    cout << "=== Menetukan RPE ===" << endl;
    cout << "Nilai e1 = ";
    cin >> e1;
    cout << "Nilai e2 = ";
    cin >> e2;
    cout << "Nilai e3 = ";
    cin >> e3;
    RPE = (e1 + e2 + e3) / 3;
    cout << "Nilai RPE adalah " << RPE << endl;
    cout << endl;

    cout << "=== Menentukan RPNE ===" << endl;
    cout << "Nilai ne1 = ";
    cin >> ne1;
    cout << "Nilai ne2 = ";
    cin >> ne2;
    RPNE = (ne1 + ne2) / 2;
    cout << "Nilai RPNE adalah " << RPNE << endl;

    if (RPE > RPNE)
    {
        cout << "<=> Anda Masuk IPA <=>" << endl;
    }
    else if (RPE < RPNE)
    {
        cout << "<=> Anda Masuk IPS <=>" << endl;
    }
    else if (RPE == RPNE)
    {
        cout << "<=> Anda Masuk IPA/IPS <=>" << endl;
    }

    return 0;
}