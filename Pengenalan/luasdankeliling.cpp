// Program to calculate the circumference and area of a circle
#include <stdio.h>

int main() {
    double radius, circumference, area, pi = 3.14;

    // Prompt user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the circumference and area
    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    // Display the results
    printf("The circumference of the circle is: %.2lf\n", circumference);
    printf("The area of the circle is: %.2lf\n", area);

    return 0;
}
