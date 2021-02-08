//Luas Permukaan tabung
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
		float T,L,R,I,phi=3.14;
		
		printf("Masukan Nilai Jari-Jari: ");
		scanf("%f",&R);
		
		printf("Masukan Nilai Jari-Jari: ");
		scanf("%f",&T);
		
		I=2*phi*pow(R,2)*T;
		L=2*phi*R*(R+T);
		
		printf("Hasil Isi Tabung adalah: %f\n",I);
		printf("Hasil Luas Tabung adalah: %f\n",L);
		
		getch();
		
}
