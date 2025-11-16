
/* Q23 (Conditional Statements)
Write a program to calculate a library fine based on late days. */

/* Assuming the following fine structure:
1–5 days = ₹2 per day
6–10 days = ₹4 per day
11–15 days = ₹6 per day
16–30 days = ₹15 per day
31+ days = Membership cancelled. */

#include <stdio.h>

int main(){
    int latedays;
    printf("Enter number of late days: \n");
    scanf("%d", &latedays);
    if (latedays <= 5){
        printf("Fine: %d Rupees \n", latedays * 2);
    }
    else if (latedays >= 6 && latedays <= 10){
        printf("Fine: %d Rupees \n", latedays * 4);
    }
    else if (latedays >= 11 && latedays <= 15){
        printf("Fine: %d Rupees \n", latedays * 6);
    }
    else if (latedays >= 16 && latedays <= 30){
        printf("Fine: %d Rupees \n", latedays * 15);
    }
    else if (latedays >= 31){
        printf("Membership cancelled.\n");
    }
    return 0;
}


/*Q24 (Conditional Statements)
Write a program to calculate an electricity bill based on units consumed. */

/* Assuming the following units and rate structure:
0–100 units = ₹5/unit
101–200 units = ₹9/unit
201+ units = ₹16/unit  */

#include <stdio.h>

int main(){
    int units, bill;
    printf("Enter total number of units consumed: \n");
    scanf("%d", &units);
    if (units <= 100){
        bill = units * 5;
        printf("Electricity Bill: %d Rupees \n", bill);
    }
    else if (units >= 101 && units <= 200){
        bill = (100 * 5) + ((units - 100) * 9);
        printf("Electricity Bill: %d Rupees \n", bill);
    }
    else if (units >= 201){
        bill = (100 * 5) + (100 * 9) + ((units - 200) * 16);
        printf("Electricity Bill: %d Rupees \n", bill);
    }
    return 0;
}

