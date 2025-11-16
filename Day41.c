
/* Q81 (Strings)
Count characters in a string without using built-in length functions. */

#include <stdio.h>

int main(){
    char str[100];
    int count = 0;
    printf("Enter any string: \n");
    scanf("%s", str);
    while (str[count] != '\0'){
        count++;
    }
    printf("The length of the string is: %d", count);
}


/* Q82 (Strings)
Print each character of a string on a new line. */

#include <stdio.h>

int main(){
    char str[100];
    int i = 0;
    printf("Enter any string: \n");
    scanf("%s", str);
    while (str[i] != '\0'){
        printf("%c\n", str[i]);
        i++;
    }
}
