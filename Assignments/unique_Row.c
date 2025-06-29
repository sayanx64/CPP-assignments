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

    printf("The given matrix is: \n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    for(int i = 0; i<r; i++){

        int isUnique = 1;

        for(int k = 0; k<i; k++){
            int isSame=1;
            for(int j = 0; j<c; j++){
                if(A[i][j] != A[k][j]){
                    isSame = 0;
                    break;
                }
            }
            if(isSame){
                isUnique = 0;
                break;
            }
        }
        if(isUnique){
            for(int j = 0; j<c; j++){
                printf("%d ",A[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}