#include <iostream>
#include <string>

using namespace std;
main() {
  int color;
  string sColor;

  cout << "Masukan warna \t";
  cin >> color;
  switch(color){
    case 1:
      sColor = "Merah";
    break; 
    case 2:
      sColor = "Jingga";
    break;
    case 3:
      sColor = "Kuning";
    break;
    case 4:
      sColor = "Hijau";
    break;
    case 5:
      sColor = "Biru";
    break;
    case 6:
      sColor = "Nila";
    case 7:
      sColor = "Ungu";
    break;
    default :
      sColor = "tidak terdaftar";
    break;
  };

  cout << sColor << endl;
  system("pause");
}