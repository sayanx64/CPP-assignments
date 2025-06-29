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
    
    
    int smallest = A[0];
    long int ssmallest = __INT64_MAX__;
    for(int i = 1; i<n; i++){
        if(A[i] < smallest){
            ssmallest = smallest;
            smallest = A[i];
        }
        else if(A[i] != smallest && A[i] < ssmallest){
            ssmallest = A[i];
        }
    }
    cout<<"Second smallest element is: "<<ssmallest<<endl;
    return 0;
}