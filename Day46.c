
/* Q91 (Strings)
Remove all vowels from a string. */

#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    int i = 0, j = 0;
    printf("Enter any string: \n");
    fgets(str,sizeof(str),stdin);
    
    while (str[i] != '\0'){
        if (!(tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u')){
            str[j] = str[i];
            j++;
        }
        i++;
        
    }
    str[j] = '\0';
    printf("%s", str);
}


/* Q92 (Strings)
Find the first repeating lowercase alphabet in a string. */

#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    int frequency[26] = {0};
    int i = 0, found = 0;
    printf("Enter any string: \n");
    fgets(str,sizeof(str),stdin);

    while (str[i] != '\0'){
        if (islower(str[i])){
            int index = str[i] - 'a';
            frequency[index]++;
            if (frequency[index] == 2){
                printf("First Repeating Character: %c\n", str[i]);
                found = 1;
                break;
            }
        }
        i++;
    }
    if (!found){
        printf("No repeating character.\n");
    }
    }
