//Q1.Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>

int main() {
    int year;

   
    printf("Enter a year: ");
    scanf("%d", &year);

    
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap Year\n", year);
    } else {
        printf("%d is Not a Leap Year\n", year);
    }

    return 0;
}

// Q2.Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main() {
    char ch;

    
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a Vowel\n", ch);
    } else {
        printf("%c is a Consonant\n", ch);
    }

    return 0;
}
