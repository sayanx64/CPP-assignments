/*WAP to find the sum of rows and columns of a matrix.
Input: Enter the row and column size of the matrix: 3 3
*/

#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the row and column size of the matrix: ");
    scanf("%d%d",&r,&c);
    int A[r][c];
    printf("Enter the elements of matrix: ");
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&A[i][j]);
        }
    }
    int rowSum[r], colsum[c];
    for(int i=0; i<r; i++){
        rowSum[i] = 0;
    }
    for(int i=0; i<c; i++){
        colsum[i] = 0;
    }

    // calc sum of each row and col
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            rowSum[i] += A[i][j];
            colsum[j] += A[i][j];
        }
    }

    printf("\nMatrix with row sums: \n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            printf("%d ",A[i][j]);
        }
        printf("| %d\n", rowSum[i]);
    }

    for(int j =0; j<c; j++){
        printf("-- ");
    }
    printf("\n| ");
    for(int j = 0; j<c; j++){
        printf("%d ",colsum[j]);
    }
    printf("\n");



    return 0;
}
