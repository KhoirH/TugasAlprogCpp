#include <stdio.h>
#include <conio.h>

main()
{
	int a = 21;
	printf("\n Nilai a = %d",a);
	printf("\n Nilai a++ = %d",a++);
	printf("\n Nilai ++a = %d",++a);
	printf("\n Nilai --a = %d",--a);
	printf("\n Nilai a = %d",a);
	
	a+=3;
	printf("\n Nilai a = %d", a);
	printf("\n Nilai ++a = %d",++a);
	printf("\n Nilai a++ = %d",a++);
	printf("\n Nilai --a = %d",--a);
	printf("\n Nilai a-- = %d",a--);

	getch();
}
