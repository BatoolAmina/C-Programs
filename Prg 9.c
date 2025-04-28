// Write a C program to design calculator with basic operations using Switch case.

#include <stdio.h>

int main() {
    float num1, num2;
    int choice;

    printf("Select operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);

    // Take input for numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Switch-case to perform the desired operation
    switch(choice) {
        case 1:
            printf("Result: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Result: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Result: %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Result: %.2f\n", num1 / num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
