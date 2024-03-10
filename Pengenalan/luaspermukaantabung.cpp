// Luas Permukaan Tabung
#include <stdio.h>
#include <math.h>

int main() {
    // Define variables with clear names
    float radius, height, pi = 3.14, cylinderVolume, cylinderSurfaceArea;

    // Prompt user for input and check for errors
    printf("Masukan Nilai Jari-Jari: ");
    if (scanf("%f", &radius) != 1) {
        printf("Invalid input. Exiting...\n");
        return 1;
    }

    printf("Masukan Nilai Tinggi: ");
    if (scanf("%f", &height) != 1) {
        printf("Invalid input. Exiting...\n");
        return 1;
    }

    // Calculate cylinder volume and surface area
    cylinderVolume = pi * pow(radius, 2) * height;
    cylinderSurfaceArea = 2 * pi * radius * (radius + height);

    // Print results
    printf("Hasil Isi Tabung adalah: %f\n", cylinderVolume);
    printf("Hasil Luas Tabung adalah: %f\n", cylinderSurfaceArea);

    // Pause program output
    // getch() is not a standard function, so I've replaced it with getchar()
    printf("\nPress any key to continue...");
    getchar();

    return 0;
}
