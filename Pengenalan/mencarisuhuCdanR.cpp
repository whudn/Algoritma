#include <stdio.h>

int main() {
    float f, c, r;

    printf("Silahkan masukan suhu dalam Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5.0 / 9.0;
    r = (f - 32) * 4.0 / 9.0;

    printf("Hasil derajat Celciusnya adalah: %.2f\n", c);
    printf("Hasil derajat Reamurnya adalah: %.2f\n", r);

    return 0;
}
