// TUGAS Bilangan GANJIL GENAP
#include <stdio.h>
#include <conio.h>

main()

{
	
	int bil;
	
	printf("Masukan Bilangan: ");
	scanf("%d", &bil);
	
	printf("Bilangan yang anda masukan tersebut adalah: ");
	if(bil %2==0)
	printf("Bilangan Genap");
	else
	printf("Bilangan Ganjil");
	
	getch();
}
