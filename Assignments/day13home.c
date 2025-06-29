// trace of matrix

// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("Enter the row or column size of a square matrix: ");
//     scanf("%d",&r);
//     int A[r][r];
//     printf("Enter the elements: ");
//     for(int i = 0; i<r; i++){
//         for(int j = 0 ; j<r; j++){
//             scanf("%d",&A[i][j]);
//         }
//     }
//     int trace=0;
//     for(int i = 0; i<r; i++){
//         for(int j = 0 ; j<r; j++){
//             if(i==j){
//                 trace+=A[i][j];
//             }
//         }
//     }
//     printf("Sum of the diagonal elements: %d",trace);
//     return 0;
// }

// Q2. wap to print the elements of upper T Matrix
// int main(){
//     int r,c;
//     printf("Enter the row or column size of a square matrix: ");
//     scanf("%d",&r);
//     int A[r][r];
//     printf("Enter the elements: ");
//     for(int i = 0; i<r; i++){
//         for(int j = 0 ; j<r; j++){
//             scanf("%d",&A[i][j]);
//         }
//     }
//     printf("Matrix: \n");
//     for(int i=0; i<r; i++){
//         for(int j = 0; j<r; j++){
//             printf("%d ",A[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nUpper triangular matrix: \n");
//     for(int i = 0; i<r; i++){
//         for(int j = 0; j<r; j++){
//             if(i<=j){
//                 printf("%d ",A[i][j]);
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
// // for lower just (i>=j)


//Q3. wap to check whether matrix is identity matrix or not
// int main(){
//     int r;
//     printf("Enter the row or column of the square matrix: ");
//     scanf("%d",&r);
//     int A[r][r];
//     printf("Enter the elements : \n");
//     for(int i=0; i<r; i++){
//         for(int j = 0; j<r; j++){
//             scanf("%d",&A[i][j]);
//         }
//     }
//     int flag=1;
//     for(int i = 0; i<r; i++){
//         for(int j= 0; j<r; j++){
//             if((i==j && A[i][j]!=1) || (i!=j && A[i][j]!=0)){
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag == 0){
//             break;
//         }
//     }
//     if(flag == 1){
//         printf("Identity matrix\n");
//     }
//     else{
//         printf("Not Indentity\n");
//     }
//     return 0;
// }


//Q4. wap to count even and odd nums in a matrix:
// int main(){
//     int r,c;
//     printf("Enter the row and column of the matrix: ");
//     scanf("%d%d",&r,&c);
//     int A[r][c];
//     printf("Enter the elements : \n");
//     for(int i=0; i<r; i++){
//         for(int j = 0; j<c; j++){
//             scanf("%d",&A[i][j]);
//         }
//     }    
//     int ce=0,co=0;
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             if(A[i][j]%2 != 0){
//                 co++;
//             }
//             else{
//                 ce++;
//             }
//         }
//     }
//     printf("Number of even elements: %d",ce);
//     printf("Number of odd elements: %d",co);
//     return 0;
// }


// Q5. wap to test for symmetric matrix
// int main(){
//     int r;
//     printf("Enter the row/column of the matrix: "); scanf("%d",&r);
//     int A[r][r];
//     printf("enter the elements: ");
//     for(int i = 0; i<r; i++){
//         for(int j = 0; j<r; j++){
//             scanf("%d",&A[i][j]);
//         }
//     }
//     int T[r][r];
//     for(int i = 0; i<r; i++){
//         for(int j = 0; j<r; j++){
//             T[j][i] = A[i][j];
//         }
//     }
//     for(int i = 0; i<r; i++){
//         for(int j = 0; j<r; j++){
//             if(A[i][j] != T[i][j]){
//                 printf("Matrix is not Symmetrical\n");
//                 return 0;
//             }
//         }
//     }
//     printf("Matrix is Symmetrical\n");
//     return 0;
// }


//Q6. WAP read a matrix and determine whether it is a sparse matrix or not..
int main(){
    int r,c;
    printf("Enter the row and column of the matrix: "); scanf("%d%d",&r,&c);
    int A[r][c];
    printf("enter the elements: \n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Given Matrix:\n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


    int c0=0;
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            if(A[i][j]==0){
                c0++;
            }
        }
    }
    if(c0 > ((r*c)/2)){
        printf("\nIt is a Sparse Matrix\n");
    }
    else{
        printf("\nIt is not a Sparse Matrix\n");
    }
    return 0;
}


