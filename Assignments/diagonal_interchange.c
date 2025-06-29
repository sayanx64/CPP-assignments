#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row and column size of the matrix: "); scanf("%d%d",&r,&c);
    int A[r][c];
    printf("Enter the elements of the binary matrix: ");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("The Given Matrix is: \n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i<r; i++){
        int t = A[i][i];
        A[i][i] = A[i][r-i-1];
        A[i][r-i-1] = t;
    }
    
    printf("\nAfter interchanging the diagonals the given matrix is: \n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    return 0;

}