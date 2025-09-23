//Q1.Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>

int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest;
    double amount = 1.0;
    int i;

  
    printf("Enter Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter Time (in years): ");
    scanf("%lf", &time);

    
    simpleInterest = (principal * rate * time) / 100;

    
    for(i = 0; i < (int)time; i++) {
        amount *= (1 + rate / 100);
    }
    compoundInterest = principal * amount - principal;


    printf("\nSimple Interest = %.2lf\n", simpleInterest);
    printf("Compound Interest = %.2lf\n", compoundInterest);

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


