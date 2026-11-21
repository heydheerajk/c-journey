
#include <stdio.h>

int main() {
    char name[50];
    float marks1, marks2, marks3, marks4, marks5;
    float total, percentage;

    printf("Enter student name: ");
    scanf("%49s", name);

    printf("Enter marks of 5 subjects:\n");

    printf("Subject 1: ");
    scanf("%f", &marks1);

    printf("Subject 2: ");
    scanf("%f", &marks2);

    printf("Subject 3: ");
    scanf("%f", &marks3);

    printf("Subject 4: ");
    scanf("%f", &marks4);

    printf("Subject 5: ");
    scanf("%f", &marks5);

    total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = total / 5;

    printf("\n----- Student Result -----\n");
    printf("Name: %s\n", name);
    printf("Total Marks: %.2f / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A+\n");
    }
    else if (percentage >= 80) {
        printf("Grade: A\n");
    }
    else if (percentage >= 70) {
        printf("Grade: B\n");
    }
    else if (percentage >= 60) {
        printf("Grade: C\n");
    }
    else if (percentage >= 40) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}
