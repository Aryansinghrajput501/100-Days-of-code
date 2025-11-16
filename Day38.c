
/*Q75 (2D Arrays)
Add two matrices. */

#include <stdio.h> 

int main(){

    int i1,j1;
    printf("Enter Matrix type for Matrix 1 (i1 j1): \n");
    scanf("%d %d", &i1, &j1);
    int mat1[i1][j1];
    printf("Enter matrix elements: \n");
    for (int a = 0; a<i1; a++){
        for (int b=0; b<j1; b++) {
            scanf("%d", &mat1[a][b]);
        }
    }

    int i2,j2;
    printf("Enter Matrix type for Matrix 2 (i2 j2): \n");
    scanf("%d %d", &i2, &j2);
    int mat2[i2][j2];
    printf("Enter matrix elements: \n");
    for (int a = 0; a < i2; a++){
        for (int b=0; b<j2 ; b++) {
            scanf("%d", &mat2[a][b]);
        }
    }

    int summatrix[i1][j1];
    
    if (i1 == i2 && j2 == j2){
        for (int a = 0; a < i1; a++){
            for (int b = 0; b < j1; b++){
                summatrix[a][b] = mat1[a][b] + mat2[a][b];    
        }
    }

    printf("The sum of your matrices: \n");
    for (int a = 0; a < i1; a++){
        for (int b = 0; b < j1; b++){
            printf("%d\t", summatrix[a][b]);
            }
        printf("\n");
        }
    }
}


/* Q76 (2D Arrays)
Check if a matrix is symmetric. */

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

    int flag=0;
    for (int a = 0; a<i; a++){
        for (int b=0; b<j; b++){
            if (tp[a][b] == mat[a][b]){
                flag = 1;
            }
            else {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1){
        printf("The matrix is symmetric.");
    }
    else {
        printf("The matrix is not symmetric.");
    }
}
