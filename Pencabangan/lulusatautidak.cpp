//LULUS ATAU TIDAK
#include <stdio.h>
#include <conio.h>

main()

{
	
	int nilai;
	
	printf("Isi Nilai Mahasiswa: ");
	scanf("%d", &nilai);
	
	if(nilai>=60)
	printf("Lulus");
	else
	printf("tidak Lulus");
	
	getch();
}
