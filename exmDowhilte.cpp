#include <iostream>
using namespace std;

// function loop 
void loopSelf () {
  int c ;
  
  // action
  cout << "input : " ; 
  cin >> c ;
  cout << "nampil : " << c << endl ; 
  cout << "again : " << endl; 
  //

  loopSelf();
};

// main function
int main () {
  loopSelf();
  system("pause");
  return  0;
}
