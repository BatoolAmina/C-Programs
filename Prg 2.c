// Write a program that calculates the principal interest and compound interest, the principal amount, rate of interest, and time are entered through the keyboard
#include <stdio.h>
#include <math.h>
int main() {
    double principal, rate, time;
    double simple_interest, compound_interest, amount;
    printf("Enter Principal amount: ");
    scanf("%lf", &principal);
    printf("Enter Rate of interest (per annum): ");
    scanf("%lf", &rate);
    printf("Enter Time (in years): ");
    scanf("%lf", &time);
    simple_interest = (principal * rate * time) / 100;
    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;
    printf("\nSimple Interest = %.2lf\n", simple_interest);
    printf("Compound Interest = %.2lf\n", compound_interest);
    return 0;
}
