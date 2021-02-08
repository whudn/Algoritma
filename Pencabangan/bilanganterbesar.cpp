//Bilangan terbesar
#include <stdio.h>
#include <conio.h>

main()

{
	
	int Maks, Bil;
	
	printf("Masukan Bilangan Pertama: ");
	scanf("%d", &Bil);
	
	Maks = Bil;
	
	printf("Masukan Bilangan Kedua: ");
	scanf("%d", &Bil);
	if(Maks < Bil)
	
	
	Maks = Bil;
	
	else
	
	printf("Masukan Bilangan ketiga: ");
	scanf("%d", &Bil);
	if(Maks < Bil)
	
	Maks = Bil;
	
	printf("Bilangan terbesarnya adalah: %d\n ", Maks);

	
	getch();
}
