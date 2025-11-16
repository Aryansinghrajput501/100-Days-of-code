
/* Q41 (Loops without Arrays/Strings)
Write a program to swap the first and last digit of a number. */

#include <stdio.h>
#include <math.h>

int main(){
    int number, noofdig=0, newnum, temp, lastdig, firstdig;
    printf("Enter a num: ");
    scanf("%d", &number);
    temp = number;
    
    // Finding the Number of digits
    while (number > 0){
        number = number / 10; 
        noofdig++;
        }        

    // First, Last and middle digits
    lastdig = temp%10;
    firstdig = (temp / pow(10,noofdig - 1));
    
    int middle = temp % (int)pow(10, noofdig - 1);
    middle = middle / 10;

    // Creating the new number
    newnum = lastdig * pow(10, noofdig-1) + (middle*10) + firstdig;
    printf("New number: %d", newnum);
}


/*Q42 (Loops without Arrays/Strings)
Write a program to check if a number is a perfect number. */

#include <stdio.h>
int main(){
    int num, i = 1, sumoffac = 0, perfectornot;
    printf("Enter any number: \n");
    scanf("%d", &num);

    while (i < num){
        if (num % i == 0){
            sumoffac = sumoffac + i;
        }
        i++;
        }
        if (sumoffac == num){
            perfectornot = 1;
        }
                else {
            perfectornot = 0;
        }
    
    

    if (perfectornot == 1){
        printf("The number is perfect.");
    }
    else {
        printf("The number is not perfect.");
    }
}

