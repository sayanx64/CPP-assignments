#include<stdio.h>


// Q1: sum fo elems of a matrix
// int main(){
//     int r,c;
//     printf("Enter the row and column size of the matrix: "); scanf("%d%d",&r,&c);
//     int M[r][c];
//     printf("Enter the elements of the matrix: "); 
//     for(int i=0; i<r;i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&M[i][j]);
//         }
//     }
//     int sum=0;
//     for(int i=0; i<r;i++){
//         for(int j=0; j<c; j++){
//             sum+=M[i][j];
//         }
//     }
//     printf("Sum of the elements of the matrix: %d\n",sum);
//     return 0;
// }





//Q2: add to matrices and display it
// int main(){
//     int r1,c1,r2,c2;
//     printf("Enter the row and column size of the matrix 1: "); scanf("%d%d",&r1,&c1);
//     printf("Enter the row and column size of the matrix 2: "); scanf("%d%d",&r2,&c2);
//     int M1[r1][c1];
//     int M2[r2][c2];
//     if(r1!=r2 && c1!=c2){
//         printf("Matrix are not compatible for addition\n");
//     }
//     else{
//         printf("Enter the elements of the matrix 1: "); 
//         for(int i=0; i<r1;i++){
//             for(int j=0; j<c1; j++){
//                 scanf("%d",&M1[i][j]);
//             }
//         }   
//         printf("\n");
//         printf("Enter the elements of the matrix 2: "); 
//         for(int i=0; i<r2;i++){
//             for(int j=0; j<c2; j++){
//                 scanf("%d",&M2[i][j]);
//             }
//         }

//         int M1a2[r1][c1];
//         for(int i=0; i<r1;i++){
//             for(int j=0; j<c1; j++){
//                 M1a2[i][j]=M1[i][j]+M2[i][j];
//             }
//         }

//         printf("Sum of Matrix 1 and Matrix 2:\n");
//         for(int i=0; i<r1;i++){
//             for(int j=0; j<c1; j++){
//                 printf("%d ",M1a2[i][j]);
//             }
//             printf("\n");
//         }

//     }   
    
//     return 0;
// }



//Q3: wap to multiply two matrices and display it:
// int main(){
//     int r1,c1,r2,c2;
//     printf("Enter the row and column size of the matrix 1: "); scanf("%d%d",&r1,&c1);
//     printf("Enter the row and column size of the matrix 2: "); scanf("%d%d",&r2,&c2);
//     int M1[r1][c1];
//     int M2[r2][c2];
//     if(c1!=r2){
//         printf("Matrix are not compatible for multi\n");
//     }
//     else{
//         printf("Enter the elements of the matrix 1: "); 
//         for(int i=0; i<r1;i++){
//             for(int j=0; j<c1; j++){
//                 scanf("%d",&M1[i][j]);
//             }
//         }   
//         printf("\n");
//         printf("Enter the elements of the matrix 2: "); 
//         for(int i=0; i<r2;i++){
//             for(int j=0; j<c2; j++){
//                 scanf("%d",&M2[i][j]);
//             }
//         }

//         int C[r1][c2];
//         for(int i=0; i<r1;i++){
//             for(int j=0; j<c2; j++){
//                 C[i][j]=0;
//             }
//         }

//         //resultant
//         for(int i = 0; i<r1; i++){
//             for(int j = 0; j<c2; j++){
//                 for(int k = 0; k<c1; k++){
//                     C[i][j] += M1[i][k]*M2[k][j];
//                 }
//             }
//         }

//         printf("Multiplication of Matrix 1 and Matrix 2:\n");
//         for(int i=0; i<r1;i++){
//             for(int j=0; j<c2; j++){
//                 printf("%d ",C[i][j]);
//             }
//             printf("\n");
//         }

//     }   
    
//     return 0;
// }


//Q4. wap to find out the transpose of a given matrix
// int main(){
//     int r,c;
//     printf("Enter the row and column size of the matrix 1: "); scanf("%d%d",&r,&c);
//     int M[r][c];
//     int Mt[c][r];
//     printf("Enter the elements of the matrix 1: "); 
//     for(int i=0; i<r;i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&M[i][j]);
//         }
//     }   
//     printf("\n");
    
//     for(int i=0; i<r;i++){
//         for(int j=0; j<c; j++){
//             Mt[j][i] = M[i][j];
//         }
//     }

//     printf("Transpose of Matrix:\n");
//         for(int i=0; i<c;i++){
//             for(int j=0; j<r; j++){
//             printf("%d ",Mt[i][j]);
//             }
//         printf("\n");
//         }
    
//     return 0;
// }



