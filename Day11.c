
/*Q21 (Conditional Statements)
Write a program to display the month name and number of days using switch-case for a given month number. */

#include <stdio.h>

int main(){
    int month;
    printf("Enter a month number: ");
    scanf("%d", &month);
    switch(month){
        case 1:
            printf("January, 31 days\n");
            break;
        case 2:
            printf("February, 28 days\n");
            break;
        case 3:
            printf("March, 31 days\n");
            break;
        case 4:
            printf("April, 30 days\n");
            break;
        case 5:
            printf("May, 31 days\n");
            break;
        case 6:
            printf("June, 30 days\n");
            break;
        case 7:
            printf("July, 31 days\n");
            break;
        case 8:
            printf("August, 31 days\n");
            break;
        case 9:
            printf("September, 30 days\n");
            break;
        case 10:
            printf("October, 31 days\n");
            break;
        case 11:
            printf("November, 30 days\n");
            break;
        case 12:
            printf("December, 31 days\n");
            break;
        default:
            printf("Invalid Input.\n");
    }
    return 0;
}


/*Q22 (Conditional Statements)
Write a program to find profit or loss percentage given cost price and selling price. */

#include <stdio.h>

int main(){
    float cp,sp,profit,loss;
    printf("Enter cost price: \n");
    scanf("%f", &cp);
    printf("Enter selling price: \n");
    scanf("%f", &sp);
    if(sp > cp){
        profit = sp - cp;
        printf("Profit Percentage: %.2f%%\n", (profit/cp)*100);
    }
    else if(cp > sp){
        loss = cp - sp;
        printf("Loss Percentage: %.2f%%\n", (loss/cp)*100);
    }
    else{
        printf("No Profit No Loss.\n");
    }
}

