// wap to interchange the columns in the matrix
#include<stdio.h>

void swap(int *x,int *y){
    int t = *x;
    *x = *y;
    *y = t;
}

int main(){
    int r,c;
    printf("Enter the row and columb size of the matrix: "); scanf("%d%d",&r,&c);
    int A[r][c];
    printf("enter array elements: \n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d",&A[i][j]);
        }
    }
    int c1,c2;
    printf("Enter the column numbers to interchange: "); scanf("%d%d",&c1,&c2);

    printf("Elements of the matrix before column interchange: \n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i<r; i++){
        swap(&A[i][c1-1], &A[i][c2-1]);
    }
    printf("\nElements of the matrix after column interchange: \n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    return 0;
}