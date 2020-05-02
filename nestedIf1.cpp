#include <iostream> // header preproccesing untuk menggunakan library cin dan cout

int main() // fungsi yang dipanggil pertama kali saat menjalankan program dengan tipe data integer saat selesai dieksekusi

{ // tanda buka fungsi yang ingin dimasukan aksi
  
  int x; // inisialisasi variable x dengan tipe data interger
  
  std::cout << "Masukan sebuah angka: "; // menampilkan string dengan text "Masukan sebuah angka: "
  
  std::cin >> x; // memasukan inputan yang valuenya akan disimpan di variable x
  
  if (x >= 10) // kondisi mengecek apakah x lebih besar sama dengan dari 10
  
  { // tanda buka kondisi yang ingin dimasukan statment
    
    if(x <= 20) // kondisi mengecek apakah x kurang dari sama dengan dari 20
    
      std::cout << "\n Nilai " << x << "ada di antara 10 dan 20";  // menampilkan string di line baru dengan text "Nilai"+ lalu value yang diinputkan diatas + "ada di antara 10 dan 20"
      // contoh output:  Nilai 11 ada di antara 10 dan 20
    
    else // kondisi yang tidak termasuk kedalam kondisi yang sebelumnya atau bisa dibilang kondisi salah.
      // dalam kasus ini berarti menyatakan x lebih dari 20
      
      std::cout << "\n Nilai" << x << "lebih dari 20"; // menampilkan string di line baru dengan text "Nilai"+ lalu value yang diinputkan diatas + "lebih dari 20"
      // contoh output  Nilai 21 lebih dari 20
  
  } // tutup kondisi yang telah dimasukan statment

  else // kondisi yang tidak termasuk kedalam kondisi yang sebelumnya atau bisa dibilang kondisi salah.
  // dalam kasus ini berarti menyatakan x kurang dari 10

  { // tanda buka kondisi yang ingin dimasukan statment

    std::cout << "\n Nilai " << x << "Kurang dari 10"; // menampilkan string di line baru dengan text "Nilai"+ lalu value yang diinputkan diatas + "Kurang dari 10"
    // contoh output  Nilai 9 Kurang dari 10
  
  } // tutup kondisi yang telah dimasukan statment
  
  return 0; // mengembalikan value saat fungsi dieksekusi yaitu 0 karena diawal kita inisialisasi fungsi ini bertipe integer

} // tanda tutup fungsi yang telah dimasukan aksi