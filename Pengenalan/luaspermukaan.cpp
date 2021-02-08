//Luas Permukaan
#include <stdio.h>
#include <conio.h>

int main()
{
		float phi=3.14,V,r,L;
		
		printf("Masukan Jari-Jari Bola: ");
		scanf("%f",&r);
		
		V=phi*r*r*r*4/3;
		L=4*phi*r*r;
		
		printf("Hasil Luas dan Volume Bola adalah : %f\n",r);
		printf("Hasil Luas Permukaan Bola adalah: %f\n",L);
		printf("Hasil Nilai Bola adalah: %f\n",V);
		
		getch();
		
}
