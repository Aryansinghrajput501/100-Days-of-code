// Q1.Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;

    
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    
    d = b*b - 4*a*c;

    if (d > 0) {
       
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different: %.2f and %.2f\n", r1, r2);
    } 
    else if (d == 0) {
        
        r1 = -b / (2*a);
        printf("Roots are real and equal: %.2f and %.2f\n", r1, r1);
    } 
    else {
        
        printf("Roots are imaginary\n");
    }

    return 0;
}

//Q2.Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
// 90-100: Grade A
// 80-89: Grade B
// 70-79: Grade C
// 60-69: Grade D
// below 60: Grade F.

#include <stdio.h>

int main() {
    int percentage;

    
    printf("Enter percentage (0-100): ");
    scanf("%d", &percentage);


    if (percentage >= 90 && percentage <= 100) {
        printf("Grade: A\n");
    } 
    else if (percentage >= 80 && percentage <= 89) {
        printf("Grade: B\n");
    } 
    else if (percentage >= 70 && percentage <= 79) {
        printf("Grade: C\n");
    } 
    else if (percentage >= 60 && percentage <= 69) {
        printf("Grade: D\n");
    } 
    else if (percentage < 60 && percentage >= 0) {
        printf("Grade: F\n");
    } 
    else {
        printf("Invalid percentage! Please enter 0-100.\n");
    }

    return 0;
}
