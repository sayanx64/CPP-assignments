#include<iostream>
using namespace std;
int main(){
    int n;
    printf("Enter array size: "); scanf("%d",&n);
    int A[n];
    cout<<"Enter array elements: ";
    for(int i = 0; i<n; i++){
        scanf("%d",&A[i]);
    }
    
    
    int largest = A[0];
    int slargest = -1;
    for(int i = 1; i<n; i++){
        if(A[i] > largest){
            slargest = largest;
            largest = A[i];
        }
        else if(A[i] < largest && A[i] > slargest){
            slargest = A[i];
        }
    }
    cout<<"Second largest element is: "<<slargest<<endl;
    return 0;
}