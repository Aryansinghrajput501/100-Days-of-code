
/* Q67 (Arrays (1D))
Insert an element in an array at a given position. */

#include <stdio.h>

int main(){
    
   
    int len;
    printf("Enter the length of array: \n");
    scanf("%d", &len);
    int arr[len+1];
    printf("Enter %d elements:\n", len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

   
    int pos,new;
    printf("Enter the position of the new element along with the element (Space Seperated): \n");
    scanf("%d %d", &pos, &new);

    // Shifting elements
    for (int i = len; i > pos; i--) {
        arr[i] = arr[i - 1];
        
    }

  
    arr[pos] = new;
    pos = pos - 1;

    for (int i = 0; i < len+1; i++) {
    printf("%d ", arr[i]);
}


}


/* Q68 (Arrays (1D))
Delete an element from an array. */

#include <stdio.h>

int main(){
 
    int len;
    printf("Enter the length of array: \n");
    scanf("%d", &len);
    int arr[len];
    printf("Enter %d elements:\n", len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }

   
    int del,pos;
    printf("\nEnter the element you want to delete: \n");
    scanf("%d", &del);

   
    for (int i = 0; i < len; i++) {
    if (arr[i] == del) {
            pos = i;
            break;
        }
    }

   
    for (int i = pos; i < len - 1; i++) {
        arr[i] = arr[i + 1];
    }
    len--;
    printf("New Array: \n");
    for (int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }
}
