#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int jari;
    float luas;
    float Phi;
    Phi = 3.14;

    cout << "Masukan Jari-jari: ";
    cin >> jari;

    luas = pow(jari, 2) * Phi; 
    cout << "Nilai Luas Lingkaran :" << '\t'<< luas;
    cout << endl;
    system("pause");
    return 0;
}

