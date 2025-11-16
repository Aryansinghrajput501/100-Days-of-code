
/*Q53 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main(){
    for(int i=1; i<=9; i+=2){
        for (int j=1; j<=i; j++){ 
            printf("*");
        }
        printf("\n");
    }

    for (int k=7; k>=1; k-=2){
        for (int l=1;l<=k;l++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


/* Q54 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:

*

***

*****
*******
***

*
*/
#include <stdio.h>

int main() {
    for (int i = 1; i <= 7; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");

        if (i == 1 || i == 3) {
            printf("\n");
        }
    }

    for (int i = 3; i >= 1; i -= 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");

        if (i == 3) {
            printf("\n");
        }
    }

    return 0;
}
