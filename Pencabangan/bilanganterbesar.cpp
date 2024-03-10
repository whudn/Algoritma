// Program to find the largest number
#include <stdio.h>

int main()
{
    // Declare variables
    int num, max_num = INT_MIN;

    // Prompt user to enter first number
    printf("Enter the first number: ");
    scanf("%d", &num);

    // Update max_num if num is greater
    if (num > max_num) {
        max_num = num;
    }

    // Prompt user to enter second number
    printf("Enter the second number: ");
    scanf("%d", &num);

    // Update max_num if num is greater
    if (num > max_num) {
        max_num = num;
    }

    // Prompt user to enter third number
    printf("Enter the third number: ");
    scanf("%d", &num);

    // Update max_num if num is greater
    if (num > max_num) {
        max_num = num;
    }

    // Print the largest number
    printf("The largest number is: %d\n", max_num);

    return 0;
}
