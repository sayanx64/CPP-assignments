#include<iostream>
using namespace std;
int main(){
    int a,b;
    printf("enter size of first array: "); scanf("%d",&a); int A[a];
    printf("Enter size of 2nd array: "); scanf("%d",&b); int B[b];
    printf("Enter elements for 1st array: "); 
    for(int i = 0; i<a; i++){
        scanf("%d",&A[i]);
    }
    printf("Enter elements for 2nd array: "); 
    for(int i = 0; i<b; i++){
        scanf("%d",&B[i]);
    }
    int s=a+b;
    int C[s];
    

    int i =0,j=0,k=0;
    while(i<a && j<b){
        if(A[i]<B[j]){
            C[k++] = A[i++];
        }
        else{
            C[k++] = B[j++];
        }
    }
    while(i<a){
        C[k++] = A[i++];
    }
    while(j<b){
        C[k++] = B[j++];
    }

    for(int i= 0; i<s; i++){
        printf("%d ",C[i]);
    }

    return 0;
}