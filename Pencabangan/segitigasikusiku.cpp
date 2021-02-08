//Luas dan Panjang sisi Miring Segitiga Siku-Siku
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
		float B,C,L,A;
		
		printf("Masukan Nilai Siku-Siku 1: ");
		scanf("%f",&A);
		
		printf("Masukan Nilai Siku-Siku 2: ");
		scanf("%f",&B);
		
		L=A*B*0.5;
		C=sqrt(pow(A,2)+pow(B,2));
		
		
		printf("Hasil luas adalah: %f\n",L);
		printf("Hasil Panjang Sisi Miring adalah: %f\n",C);
		
		getch();
		
}
