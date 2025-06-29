#include<iostream>
using namespace std;
 
int main(){
    int n;
    printf("Enter array size: "); scanf("%d", &n);
    int A[n];
    printf("Enter array elems: ");
    for(int i = 0; i<n ; i++){
        scanf("%d", &A[i]);
    }

    int k;
    printf("Enter the value of k: "); scanf("%d", &k);

    k = k%n;

    printf("Array before right rotation : "); 
    for(int i = 0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    // right rotation using reversing
    for(int start = 0, end = n-k-1; start<end; start++, end--){
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
    }

    for(int start = n-k, end = n-1; start<end; start++, end--){
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
    }
    
    for(int start = 0, end = n-1; start<end; start++, end--){
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
    }

    printf("Array after right rotated by %d positions: ",k);
    for(int i = 0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}