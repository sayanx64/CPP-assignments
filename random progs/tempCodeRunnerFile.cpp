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
    while(i<m && j<n){
        if(A[i]<B[j]){
            C[k++] = A[i++];
        }
        else if(A[i] > B[j]){
            C[k++] = B[j++];
        }
        else{
            C[k++] = B[j++];
            i++;
        }
    }
    while (i < m) {
        C[k++] = A[i++];
    }
    while (j < n) {
        C[k++] = B[j++];
    }
    printf("after merging array A and B into C: ");
    for(int l = 0; l<k; l++){
        printf("%d ",C[l]);
    }
    return 0;
}