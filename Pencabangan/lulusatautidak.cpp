// DETERMINE WHETHER A STUDENT PASSES OR FAILS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studentGrade;

    printf("Enter the student's grade: ");
    scanf("%d", &studentGrade);

    if (studentGrade >= 60) {
        puts("Passed");
    } else {
        puts("Failed");
    }

    getch();
    return 0;
}
