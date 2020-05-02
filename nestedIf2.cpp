#include <iostream> // header preproccesing untuk menggunakan library cin dan cout
#include <string.h>

int main() // fungsi yang dipanggil pertama kali saat menjalankan program dengan tipe data integer saat selesai dieksekusi

{ // tanda buka fungsi yang ingin dimasukan aksi
 
  int x, y; // inisisalisasi variable x dan y dengan tipe data integer

  std::cout << "Masukkan sebuah bilangan bulat :"; // menguluarkan text "Masukkan sebuah bilangan bulat :"
  
  std::cin >> x; // memasukan inputan yang valuenya akan disimpan di variable x
  
  std::cout << "Masukkan sebuah bilangan bulat lainnya"; // menguluarkan text "Masukkan sebuah bilangan bulat lainnya :"
  
  std::cin >> y;  // memasukan inputan yang valuenya akan disimpan di variable y

  if( x > 0 && y > 0) { // memiliki aksi dengan syarat x lebih dari 0 dan y lebih dari 0

    std::cout << "Kedua bilangan tersebut adalah bilangan POSITIVE \n";  // menguluarkan text  "Kedua bilangan tersebut adalah bilangan POSITIVE "
  
  } // tutup kondisi yang telah dimasukan statment
  
  else if (x > 0 || x > 0) { // memiliki aksi dengan syarat x lebih dari 0 atau y lebih dari 0

    std::cout << "salah satu tersebut adalah bilangan POSITIVE \n"; // menguluarkan text  "salah satu bilangan tersebut adalah bilangan POSITIVE "

  } // tutup kondisi yang telah dimasukan statment
 
  else { // kondisi yang tidak termasuk kedalam kondisi yang sebelumnya atau bisa dibilang kondisi salah.
    // dalam kasus ini berarti menyatakan x kurang dari sama dengan 0 dan y kurang dari sama dengan 0 
    
    std::cout << "Kedua bilangan tersebut BUKAN bilangan POSITIVE \n"; // menampilkan string dengan text "Kedua bilangan tersebut BUKAN bilangan POSITIVE"
  
  } // tutup kondisi yang telah dimasukan statment

  return 0;
} // tanda tutup fungsi yang telah dimasukan aksi