// Luas dan Panjang Sisi Miring Segitiga Siku-Siku
#include <stdio.h>
#include <math.h>

int main() {
    float side1, side2, area, hypotenuse;

    printf("Masukan Nilai Sisi 1: ");
    scanf("%f", &side1);

    printf("Masukan Nilai Sisi 2: ");
    scanf("%f", &side2);

    area = 0.5 * side1 * side2;
    hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));

    printf("Hasil luas adalah: %.2f\n", area);
    printf("Hasil panjang sisi miring adalah: %.2f\n", hypotenuse);

    return 0;
}
