// wap to find the sum of elements of upper triangular 
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the row and column size of a square matrix: ");
    scanf("%d%d",&r,&c);
    int A[r][c];
    printf("Enter the elements of matrix: "); 

    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d",&A[i][j]);
        }
    }

    int sum = 0;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(i<=j){
                sum+=A[i][j];
            }
        }
    }
    printf("Sum of elements of upper triangular matrix: %d",sum);
    return 0;
}