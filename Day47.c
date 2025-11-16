
/* Q93 (Strings)
Check if two strings are anagrams of each other. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    int len1,len2, frequency[26]= {0};
    printf("Enter string 1: \n");
    fgets(str1,sizeof(str1),stdin);
    len1 = strlen(str1);
    printf("Enter string 2: \n");
    fgets(str2,sizeof(str2),stdin);
    len2 = strlen(str2);
    
    if (len1 != len2){
        printf("The strings are not anagram.");
        return 0;
    }

    for (int i = 0; str1[i]; i++){
        if (isalpha(str1[i])){
            frequency[tolower(str1[i]) - 'a']++;
        }
    }

    for (int j = 0; str2[j]; j++){
        if (isalpha(str2[j])){
            frequency[tolower(str2[j]) - 'a']--;
        }
    }

    for (int k = 0; k < 26; k++){
        if (frequency[k] != 0){
            printf("The strings are not anagrams.");
            return 0;
        }
    }

    printf("The strings are anagrams.");
    return 0;
}


/* Q94 (Strings)
Find the longest word in a sentence. */

#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    int maxlength = 0,currlength = 0,start = 0,maxstart = 0;
    int i = 0, found = 0;
    printf("Enter any string: \n");
    fgets(str,sizeof(str),stdin);

    while (str[i] != '\0'){
        if ((isalpha(str[i]))){
            if (currlength == 0){
                start = i;        
            }
        currlength++;
        }
        else {
            if (maxlength < currlength){
                maxlength = currlength;
                maxstart = start;
            }
        currlength = 0;
        }
    i++;
    }

    if (currlength > maxlength){
        maxlength = currlength;
        maxstart = start;
    }
    
    
    printf("Longest word is: ");
    for (i = 0; i< maxlength; i++){
        putchar(str[maxstart + i]);
    }
    printf("\n");
    return 0;

    }
