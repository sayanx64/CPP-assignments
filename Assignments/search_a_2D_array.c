// wap to search for an element in a row wise and column wise sorted matrix...

//Naive approach(linear search)
#include<stdio.h>
// int main(){
//     int r,c;
//     printf("Enter the row and column size of the matrix: "); scanf("%d%d",&r,&c);
//     int A[r][c];
//     printf("Enter the element of the row wise and col wise sorted matrix: \n");
//     for(int i = 0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&A[i][j]);
//         }
//     }
//     int t;
//     printf("Enter the element to search: "); scanf("%d",&t);
//     printf("The given matrix is: \n");
//     for(int i = 0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d ",A[i][j]);
//         }
//         printf("\n");
//     }
//     int tr,tc,found=0;
//     for(int i = 0; i<r; i++){
//         for(int j = 0; j<c; j++){
//             if(A[i][j] == t){
//                 found = 1;
//                 tr=i;
//                 tc=j;
//                 break;
//             }
//         }
//         if(found){
//             break;
//         }
//     }
    
//     if(found){
//         printf("Element found at the position in the matrix is: %d, %d\n",tr,tc);
//     }
//     else{
//         printf("Element not found\n");
//     }
//     return 0;
// }


// naive approach(binary search)
// int main(){
//     int r,c;
//     printf("Enter the row and column size of the matrix: "); scanf("%d%d",&r,&c);
//     int A[r][c];
//     printf("Enter the element of the row wise and col wise sorted matrix: \n");
//     for(int i = 0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&A[i][j]);
//         }
//     }
//     int t;
//     printf("Enter the element to search: "); scanf("%d",&t);
//     printf("The given matrix is: \n");
//     for(int i = 0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d ",A[i][j]);
//         }
//         printf("\n");
//     }
//     int tr,tc,found=0;
//     for(int i = 0; i<r; i++){
//         int l=0;
//         int h=c;
//         while(l<=r){
//             int mid = (l+h)/2;
//             if(A[i][mid] == t){
//                 found = 1;
//                 tr=i;
//                 tc=mid;
//                 break;
//             }
//             else if(A[i][mid] < t){
//                 l = mid+1;
//             }
//             else{
//                 h = mid-1;
//             }
//         }
//         if(found){
//             break;
//         }
//     }
//     if(found){
//         printf("Element found at location %d, %d",tr+1,tc+1);
//     }
//     else{
//         printf("Element not found");
//     }
// }


//Optimal soln:
int main(){
    int r,c;
    printf("Enter the row and column size of the matrix: "); scanf("%d%d",&r,&c);
    int A[r][c];
    printf("Enter the element of the row wise and col wise sorted matrix: \n");
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&A[i][j]);
        }
    }
    int t;
    printf("Enter the element to search: "); scanf("%d",&t);
    printf("The given matrix is: \n");
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    int i = 0, j=c-1;
    while(i<r && j>=0){
        if(A[i][j] == t){
            printf("Found at: %d, %d",i,j);
            return 0;
        }
        if(A[i][j] > t){
            j--;
        }
        else{
            i++;
        }
    }
    printf("Not found\n");
    return 0;
}




