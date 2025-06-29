#include<iostream>
using namespace std;

void bubblesort(int A[], int n){
    for(int i = 0; i<n ;i++){
        int flag = 0; 
        for(int j = 0; j<n; j++){
            if(A[j] > A[j+1]){
                // swap
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
}

int main(){
    int n;
    printf("Enter array size: "); scanf("%d",&n);
    int A[n];
    cout<<"Enter array elements: ";
    for(int i = 0; i<n; i++){
        scanf("%d",&A[i]);
    }
    cout<<"Array before sorting: ";
    for(int i = 0; i<n; i++){
        printf("%d ",A[i]);
    }   
    cout<<endl;
    cout<<"Array after sorting: "; 
    bubblesort(A,n);
    for(int i = 0; i<n; i++){
        printf("%d ",A[i]);
    }   
    cout<<endl;
}