// Q1.Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main() {
    int a, b;

    
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

   
    a = a + b;
    b = a - b;
    a = a - b;

   
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

// Q2.Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n, sum = 0, i;

    // input n
    printf("Enter a number n: ");
    scanf("%d", &n);

    // calculate sum using loop
    for (i = 1; i <= n; i++) {
        sum = sum + i;   // add each number
    }

    // show result
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
