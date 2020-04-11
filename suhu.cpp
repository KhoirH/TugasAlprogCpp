#include <iostream>

#define lebar 2

using namespace std;
int main(){
  double c, f;
  cout << "============================" << endl;
  cout << "Masukan Nilai Celcius \t \t: " ;
  cin >> c;

  f = c * 1.8 + 32;
  
  cout << "Ini adalah nilai Fahrenheit \t: " << f << endl;
  cout << "============================" << endl ;

  system("pause");
  return 0;
}