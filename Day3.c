//Q1.Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    
    fahrenheit = (celsius * 9 / 5) + 32;

    
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}

// Q2.Write a program to swap two numbers using a third variable.

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
