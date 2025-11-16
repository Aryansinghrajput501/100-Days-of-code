
/*Q59 (Arrays (1D))
Count even and odd numbers in an array. */

#include <stdio.h>

int main(){
    int len;
    printf("Enter the length of array: \n");
    scanf("%d", &len);
    int arr[len];
    for (int i=0; i<len; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int even=0,odd=0;
    for (int i=0; i < len;i++){
        if (arr[i] % 2 == 0){
            even+=1;
        }
        else {odd+=1;}
    }

    printf("Even: %d\n", even);
    printf("Odd: %d",odd);
}



/*Q60 (Arrays (1D))
Count positive, negative, and zero elements in an array. */

#include <stdio.h>

int main(){
    int len;
    printf("Enter the length of array: \n");
    scanf("%d", &len);
    int arr[len];
    for (int i=0; i<len; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int pos=0,neg=0,zero=0;
    for (int i=0;i<len;i++){
        if (arr[i] < 0){
            neg+=1;
        }
        else if (arr[i] > 0){
            pos+=1;
        }
        else {zero+=1;}
    }

    printf("The number of Positive Numbers: %d\n", pos);
    printf("The number of Negative Numbers: %d\n", neg);
    printf("The number of Zeroes: %d", zero);

}
