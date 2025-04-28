// Write a C program to print Fibonacci Series without using Recursion and using Recursion

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // Print the first two terms
    printf("%d %d ", first, second);

    // Calculate the next terms and print
    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);

        // Update the values for the next iteration
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}







#include <stdio.h>

// Function to print Fibonacci series using recursion
void fibonacci(int n, int first, int second) {
    if (n == 0) {
        return;
    }

    printf("%d ", first);
    fibonacci(n - 1, second, first + second);
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    fibonacci(n, 0, 1);

    printf("\n");
    return 0;
}
