#include<stdio.h>
int main(){
    int m,n;
    printf("Enter size of array A: "); scanf("%d",&m);
    printf("Enter size of array B: "); scanf("%d",&n);
    int A[m], B[n];
    printf("Enter %d elements for array A: ",m);
    for(int i = 0; i<m; i++){
        scanf("%d",&A[i]);
    }
    printf("Enter %d elements for array B: ",n);
    for(int i = 0; i<n; i++){
        scanf("%d",&B[i]);
    }
    int C[m+n];
    int i=0,j=0,k=0;
    while(i<j){
        if(A[i]<B[j]){
            C[k++] = A[i++];
        }
        else{
            C[k++] = B[j++];
        }
    }
    for(int i = 0; i<m; i++){
        C[k++] = A[i];
    }
    for(int i = 0; i<n; i++){
        C[k++] = B[i];
    }
    printf("after merging array A and B into C: ");
    for(int i = 0; i<m+n; i++){
        printf("%d ",C[i]);
    }
    return 0;
}