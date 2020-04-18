#include <conio.h>
#include <iostream>

// penjumlahan(1), perkalian(2), pembagian(3), dan pengurangan(4) 
using namespace std;
main()
{
  double bilangan_1, bilangan_2, count;
  int operasi ;

  cout << "Selamat Datang" << endl;
  cout << "Masukan bilangan 1 : ";
  cin >> bilangan_1 ;
  cout << endl;
  
  cout << "Masukan bilangan 2 : ";
  cin >> bilangan_2;
  cout << endl;

  cout << "Operasi matematik yang dipilih (1/2/3/4) : ";
  cin >> operasi;
  cout << endl;

  if (operasi == 1) {
    count = bilangan_1 + bilangan_2;
  } else if (operasi == 2) {
    count = bilangan_1 * bilangan_2;
  } else if (operasi == 3) {
    count = bilangan_1 / bilangan_2;
  } else if (operasi == 4) {
    count = bilangan_1 - bilangan_2;
  } else {
    count = 0;
  }

  cout << "hasil \t" << count;
  getch();
}