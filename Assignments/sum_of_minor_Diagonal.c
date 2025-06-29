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
    int sum=0;
    for(int i = 0; i<r; i++){
        sum+=A[i][r-i-1];
    }
    printf("Sum of the minor diagonal of the matrix: %d",sum);
    return 0;

}


