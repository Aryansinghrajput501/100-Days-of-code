
/* Q39 (Loops without Arrays/Strings)
Write a program to find the product of odd digits of a number. */

#include <stdio.h>

int main(){
    int number, oddnums=1;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number >= 1){
         if (number == 1){
            printf("No odd digits found.");
            return 0;
        }
        else if (number % 2 == 0) {
            number = number / 10;
        }
        else if (number % 2 != 0) {
            oddnums = oddnums * (number % 10);
            number = number / 10;
        }
       
    }
    printf("Product of odd digits: %d", oddnums);
    return 0;
}


#include <stdio.h>

int main(){
    int place = 1, bin, lastdig, onescomp = 0;
    printf("Enter a binary number: \n");
    scanf("%d", &bin);
    while (bin > 0) {
        lastdig = bin % 10;
        if (lastdig == 0){
            lastdig = 1;
        }
            else {
            lastdig = 0;
        }
        onescomp = (place*lastdig) + onescomp;
        place = place*10;
        
        bin = bin/10;
    }
    printf("The ones complement is %d", onescomp);
}
