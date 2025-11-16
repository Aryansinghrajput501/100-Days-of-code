
  /* Q100 (Strings)
  Print all sub-strings of a string. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
  char str[100];
  printf("Enter any string: \n");
  fgets(str,sizeof(str),stdin);
  int len = strlen(str);
  
  if (str[len - 1] == '\n'){
    str[len - 1] = '\0';
    len--;
  }

  for (int i = 0; i < len; i++){
    for (int j = i; j < len; j++){
      for (int k = i; k<=j; k++){
        printf("%c", str[k]);
        }
      printf("\n");
      }
    }
}


/* Q99 (Strings)
Change the date format from dd/04/yyyy to dd-Apr-yyyy. */

#include <stdio.h>

int main(){
  char *arr[] = {"Jan", "Feb", "Mar","Apr","May","Jun", "Jul","Aug","Sep","Oct","Nov","Dec"};
  int day,month,year;
  printf("Enter the date (Day Month Year) (Seperated by /): ");
  scanf("%d/%d/%d", &day, &month, &year);
  char date[10];
  sprintf(date, "%02d-%s-%d", day, arr[month-1],year);
  printf("%s", date);
}
