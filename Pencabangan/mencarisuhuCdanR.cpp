//Mencari suhu C dan R
#include <stdio.h>
#include <conio.h>

main()
{
		int r,f,c;
		printf("Silahkan masukan suhu dalam Fahrenheit:");
		scanf("%d",&f);
		
		c=(f-32)*5/9;
		r=(f-32)*4/9;
		
		printf("Hasil derajat Celciusnya adalah: %d\n",c);
		printf("Hasil derajat Reamurnya adalah: %d\n",r);
		
		getch();
		
}
