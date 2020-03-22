#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // kita diawal harus mendeklarasikan variable
    // ini adalah variable

    //variable berisi karakter dengan panjang maksimal 20
    char siswa_nama[20];
    int nilai_1, nilai_2, nilai_3;
    float hasil;
    
    // gambar macam* tipe data
    // https://www.nesabamedia.com/wp-content/uploads/2018/05/jenis-jenis-tipe-data-2.png

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
    cout << "Nilai rata rata " << siswa_nama << " adalah = " << hasil <<  endl;
    system("pause");

    return 0;
}

