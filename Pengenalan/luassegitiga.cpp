// Program to calculate the area of a triangle

#include <stdio.h>

int main() {
    int base, height, area;

    // Prompt user to enter the base of the triangle
    printf("Enter the base of the triangle: ");
    scanf("%d", &base);

    // Prompt user to enter the height of the triangle
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    // Calculate the area of the triangle
    area = base * height / 2;

    // Display the area of the triangle
    printf("The area of the triangle is: %d\n", area);

    return 0;
}
