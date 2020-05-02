#include <iostream>
#include <math.h>

// Program menghitung stok barang
// dengan menggunakan Operator binary
// 1. operator binary
// 2. operator Assignment
// 3. operator unary
// 4. operator tenary

using namespace std;
int main(){
  int wrap1, wrap2, kebutuhan;

  int index = 0 ;
  char startAgain = 'n';
  
  cout << "==== Program Stok Barang ===="<< endl;
 
  while(true){
    cout << "Kamu butuh mengetahuin untuk apa ?" << endl;
    cout << "(1) jumlah hari habis barang" << endl;
    cout << "(2) barang yang di stok setiap harinya" << endl;
    cout << "Pilih: ";
    cin >> kebutuhan;
    cout << endl;

    if (kebutuhan == 1){
      cout << "Masukan total barang anda : ";
      cin >> wrap1;
      cout << endl;
      cout << "Masukan stok barang setiap harinya : ";
      cin >> wrap2;
      cout << endl;
      cout << "Kamu akan kebahisan barang pada hari ke : " << ceil(wrap1 / wrap2) << endl;
    } else if (kebutuhan == 2) {
      cout << "Masukan total barang anda : ";
      cin >> wrap1;
      cout << endl;
      cout << "Hari yang diperlukan untuk produksi : ";
      cin >> wrap2;
      cout << endl;
      cout << "Kamu bisa memproduksi barang setiap harinya : " << floor(wrap1 / wrap2) << endl;
      (wrap1 % wrap2 > 0) ? cout << "Dengan sisa barang : " << wrap1 % wrap2 << endl: cout << "" << endl ;
    } else {
      cout << "kategori tidak valid" << endl;
    }

    cout << "Mencoba lagi : (Y/n) ";
    cin >> startAgain ;
    cout << endl;
    if( startAgain == 'Y'){
      index++;
      cout << "========== page of " << index << endl;
    } else if (startAgain == 'n') {
      break;
    } else {
      cout << "command tidak valid" << endl;
      break;
    }
  }
  
  return 0;
}