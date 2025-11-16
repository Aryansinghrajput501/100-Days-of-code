
/* Q73 (2D Arrays)
Find the sum of each row of a matrix and store it in an array. */

#include <stdio.h>
int main(){

    int i,j;
    printf("Enter Matrix type (i j): \n");
    scanf("%d %d", &i, &j);
    int mat[i][j];
    printf("Enter matrix elements: \n");
    for (int a = 0; a<i; a++){
        for (int b=0; b<j; b++) {
            scanf("%d", &mat[a][b]);
        }
    }

    int sum[i];
    for (int a = 0; a < i; a++){
        sum[a] = 0;
        for (int b=0; b < j; b++)
        sum[a] = sum[a] + mat[a][b];
    }

    for (int a = 0; a<i; a++){
        printf("%d ", sum[a]);
    }
}

/* Q74 (2D Arrays)
Find the transpose of a matrix. */

#include <stdio.h>

int main(){

    int i,j;
    printf("Enter Matrix type (i j): \n");
    scanf("%d %d", &i, &j);
    int mat[i][j];
    printf("Enter matrix elements: \n");
    for (int a = 0; a<i; a++){
        for (int b=0; b<j; b++) {
            scanf("%d", &mat[a][b]);
        }
    }

    int tp[j][i];
    
    for (int a =0; a<i; a++){
        for (int b=0; b<j; b++){
            tp[a][b] = mat[b][a];
        }
    }

    printf("Your matrix: \n");
    for (int a = 0; a<i; a++) {
        for (int b=0;b<j; b++){
            printf("%d\t", mat[a][b]);
        }
        printf("\n");
    }

    printf("Transpose of your matrix: \n");
    for (int a = 0; a<i; a++) {
        for (int b=0;b<j; b++){
            printf("%d\t", tp[a][b]);
        }
        printf("\n");
    }
}
