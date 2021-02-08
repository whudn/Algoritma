//Luas Dan Keliling
#include <stdio.h>
#include <conio.h>

int main()
{
		float r,k,l,phi=3.14;
		
		printf("Masukan Nilai Jari-Jari: ");
		scanf("%f",&r);
		
		k=2*phi*r;
		l=phi*r*r;
		
		printf("Hasil Keliling adalah: %f\n",k);
		printf("Hasil Luas adalah: %f\n",l);
		
		getch();
		
}
