
/*Q31 (Loops without Arrays/Strings)
Write a program to take a number as input and print its equivalent binary representation. */

#include <stdio.h>

int main(){
    int num, binary= 0, place=1;
    printf("Enter a number: \n");
    scanf("%d", &num);

    while (num>0) {
        binary = binary + (num % 2) * place;
        num = num / 2;
        place = place * 10;
    }
    printf("The binary representation is: %d", binary);
    return 0;
}


/*Q32 (Loops without Arrays/Strings)
Write a program to check if a number is a palindrome. */

#include <stdio.h>

int main(){
    int number;
    int revnum = 0, remainder, orignum;
    printf("Enter a number: ");
    scanf("%d", &number);
    orignum = number;
    while (number>0){
        remainder = number % 10;
        revnum = revnum * 10 + remainder;
        number = number / 10;
    }
    if (orignum == revnum) {
        printf("The number is a palindrome.");
    }
    else{
        printf("The number is not a palindrome.");
    }
}
