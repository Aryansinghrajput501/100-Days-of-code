
/* Q95 (Strings)
Check if one string is a rotation of another. */

#include <stdio.h>
#include <string.h>

int main(){

    char str1[100], str2[100];
    printf("Enter string 1: \n");
    scanf("%s", str1);
    printf("Enter string 2: \n");
    scanf("%s", str2);

    char temp[200];
    strcpy(temp,str1);
    strcat(temp,str1);

    if (strstr(temp,str2)){
        printf("Rotation");
    }
    else{
        printf("Not Rotation");
    }
}


/* Q96 (Strings)
Reverse each word in a sentence without changing the word order. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char str[100];
    printf("Enter string: \n");
    fgets(str,sizeof(str),stdin);

    char temp[200];
    int len = strlen(str);

    if (str[len-1] == '\n'){
        str[len-1] = '\0';
    }

    int start = 0;
    int end;
    for (int i = 0; i <= len; i++){
        if (str[i] == ' ' || str[i] == '\0'){
            end = i - 1;
        
            while (start < end){
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
        
            }
            start = i + 1;
        }
    }
    
    printf("Reversed Sentence: %s", str);
    return 0;
}
