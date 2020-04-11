#include <conio.h>
#include <iostream>

using namespace std;
main()
{
	
	double nilai_uas, nilai_uts, tugas, kehadiran; 
	double rate_nilai_uas, rate_nilai_uts, rate_tugas, rate_kehadiran;
	double sum;
	int scala = 4;
	char index;


	cout << "Masukan nilai uas ber-sekala " << scala << "\t = \t";
	cin >> nilai_uas;
	cout << endl;

	cout << "Masukan nilai uts ber-sekala " << scala << "\t = \t";
	cin >> nilai_uts;
	cout << endl;
	
	cout << "Masukan nilai tugas ber-sekala " << scala << "\t = \t";
	cin >> tugas;
	cout << endl;

	cout << "Masukan nilai kehadiran ber-sekala " << scala << "\t = \t";
	cin >> kehadiran;
	cout << endl;

	rate_nilai_uas = nilai_uas / scala * 40 ;
	rate_nilai_uts = nilai_uts / scala * 30 ;
	rate_kehadiran = kehadiran / scala * 10 ;
	rate_tugas = tugas / scala * 20 ;

	sum = rate_kehadiran + rate_nilai_uas + rate_nilai_uts + rate_tugas;
	cout << sum << endl;

	if(sum >= 85) {
		index = 'A';
	} else if (85 > sum && sum >= 70 ) {
		index = 'B';
	} else if (70 > sum && sum >= 55 ) {
		index = 'C';
	} else if (55 > sum && sum >= 40 ) {
		index = 'D';
	} else {
		index = 'E';
	}

	cout << "Kamu memiliki nilai Index : " << index << endl;
	getch();
}
