//Q1. Write a program to input two numbers and display their sum //
#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

// Q2.Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    float a, b;   

    
    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    
    printf("\nResults:\n");
    printf("Sum: %.2f\n", a + b);
    printf("Difference: %.2f\n", a - b);
    printf("Product: %.2f\n", a * b);

    if (b != 0) {
        printf("Quotient: %.2f\n", a / b);
    } else {
        printf("Quotient: Undefined (division by zero)\n");
    }

    return 0;
}
