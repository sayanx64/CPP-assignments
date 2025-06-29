//q1..
#include<iostream>
using namespace std;
void Multi(int A[10][10], int B[10][10], int C[10][10], int r1, int c1, int r2, int c2){
    for(int i=0; i<r1;i++){
        for(int j=0; j<c2; j++){
            C[i][j]=0;
        }
    }        
    //resultant
    for(int i = 0; i<r1; i++){
        for(int j = 0; j<c2; j++){
            for(int k = 0; k<c1; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    
}


int main(){
    int r1, r2, c1, c2;
    printf("Enter the row and column size of the matrix 1: "); scanf("%d%d",&r1,&c1);
    printf("Enter the row and column size of the matrix 2: "); scanf("%d%d",&r2,&c2);
    int M1[10][10];
    int M2[10][10];
    int M3[10][10];
    if(c1!=r2){
        printf("Matrix are not compatible for multi\n");
    }
    else{
        printf("Enter the elements of the matrix 1: "); 
        for(int i=0; i<r1;i++){
            for(int j=0; j<c1; j++){
                scanf("%d",&M1[i][j]);
            }
        }   
        printf("\n");
        printf("Enter the elements of the matrix 2: "); 
        for(int i=0; i<r2;i++){
            for(int j=0; j<c2; j++){
                scanf("%d",&M2[i][j]);
            }
        }


        Multi(M1, M2, M3, r1, c1, r2, c2);

        printf("Multiplication of Matrix 1 and Matrix 2:\n");
        for(int i=0; i<r1;i++){
            for(int j=0; j<c2; j++){
                printf("%d ",M3[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}