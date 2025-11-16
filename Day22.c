
/*Q43 (Loops without Arrays/Strings)
Write a program to check if a number is a strong number. */

#include <stdio.h>


int fact(int i){
    int fact = 1, j = 1;
    while (j <= i){
        fact = fact * j;
        j++;
    }
    return fact;
}

int main(){
    int num, temp, sum = 0, lastdig;
    printf("Enter a number: \n");
    scanf("%d", &num);
    temp = num;
    
    
    while (num > 0){    
        lastdig = num % 10;
        sum = sum + fact(lastdig);
        num = num / 10;
    }

    
    if (temp == sum){
        printf("The number is strong.");
    }
    else {
        printf("The number is not strong.");
    }
}


/*Q44 (Loops without Arrays/Strings)
Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms. */

#include <stdio.h>

int main(){
    int n;
    float sum=0;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for (int i = 2; i <= n+1; i++){
        float numerator = 2*i - 1;
        float denominator = 2*i;
        float frac = numerator/denominator;
        sum = sum + frac;
    }
    sum++;
    printf("The required sum is: %.2f", sum);
}
