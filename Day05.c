//Q1.Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>  // for pow() function

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;

    
    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    
    simpleInterest = (principal * rate * time) / 100;

    
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    
    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nCompound Interest = %.2f\n", compoundInterest);

    return 0;
}

// Q2.Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int seconds, hours, minutes;

    
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

   
    hours = seconds / 3600;            // 1 hour = 3600 seconds
    minutes = (seconds % 3600) / 60;   // remaining minutes
    seconds = seconds % 60;            // remaining seconds
    return 0;
}

