#include<stdio.h>
int main(){
    int n;
    printf("Enter array size: "); scanf("%d",&n);
    int A[n];
    printf("Enter elems: ");
    for(int i = 0; i<n; i++){
        scanf("%d",&A[i]);
    }
    printf("After swapping: ");
    for(int i = 0; i<n; i+=2){
        int t= A[i];
        A[i] = A[i+1];
        A[i+1] = t;
    }
    for(int i = 0; i<n; i++){
        printf("%d ",A[i]);
    }
    return 0;
}