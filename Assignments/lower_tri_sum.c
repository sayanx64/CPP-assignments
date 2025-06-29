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

    int s=0;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(i>=j){
                s+=A[i][j];
            }
        }
    }
    printf("Sum of the lower triangular matrix: %d",s);
    return 0;
}