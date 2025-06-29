#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    printf("Enter the array size: "); scanf("%d",&n);
    int A[n];
    printf("Enter array elements: ");
    for(int i = 0; i<n; i++){
        scanf("%d",&A[i]);
    }
    int max = -1;
    printf("Leader Elements: ");
    for(int i=n-1; i>=0; i--){
        if(A[i]>max){
            printf("%d ",A[i]);
            
            max=A[i];
        }
    }

    return 0;
}