
#include <stdio.h>

int main() {
    double original_amount, remaining_5, remaining_10, remaining_20;

    printf("Welcome to PCC's Radiotherapy Safety Calculator!\n");
    printf("Enter the original sample size (in grams): ");
    scanf("%lf", &original_amount);

    // Calculations
    remaining_5 = original_amount / 2;
    remaining_10 = remaining_5 / 2;
    remaining_20 = remaining_10 / 2;

    // Output with four decimal places
    printf("After 5 years, %.4lf g remain\n", remaining_5);
    printf("After 10 years, %.4lf g remain\n", remaining_10);
    printf("After 20 years, %.4lf g remain\n", remaining_20);

    printf("Have a safe day!\n");

    return 0;
}
