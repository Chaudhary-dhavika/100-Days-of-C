//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    int num1, num2;
    float sum, difference, product, quotient;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1 / num2;

    printf("Sum of %d and %d is %.2f\n", num1, num2, sum);
    printf("Difference of %d and %d is %.2f\n", num1, num2, difference);
    printf("Product of %d and %d is %.2f\n", num1, num2, product);
    printf("Quotient of %d and %d is %.2f\n", num1, num2, quotient);

    return 0;
}