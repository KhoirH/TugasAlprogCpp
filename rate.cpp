#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // kita diawal harus mendeklarasikan variable
    // ini adalah variable
    char siswa_nama[20];
    int nilai_1;
    int nilai_2;
    int nilai_3;
    float hasil;

    // membuat inputan nama siswa
    cout << "Nama Siswa \t : ";
    cin >> siswa_nama;

    // membuat inputan nilai 1
    cout << "Nilai Pertandingan 1: ";
    cin >> nilai_1;

    // membuat inputan nilai 2
    cout << "Nilai Pertandingan 2: ";
    cin >> nilai_2;

    // membuat inputan nilai 3
    cout << "Nilai Pertandingan 3: ";
    cin >> nilai_3;

    // menulis varibale hasil
    hasil =  (nilai_1 + nilai_2 + nilai_3) / 3;

    //  menampilkan hasil
    cout << "Nilai rata rata" << siswa_nama << "adalah = " << hasil <<  endl;
    system("pause");

    return 0;
}

