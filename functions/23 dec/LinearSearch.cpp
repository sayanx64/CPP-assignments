#include<iostream>
using namespace std;

int Search(int A[], int n, int k){
    int dex=-1;
    for(int i=0; i<n; i++){
        if(A[i]==k){
            dex = i;
        }
    }
    return dex;
}

int main(){
    int n;
    cout<<"Enter size of array: "; cin>>n;
    int A[n];
    cout<<"Enter array elems: "; 
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
    int k;
    cout<<"Enter key to search: "; cin>>k;
    cout<<"Element found at index: "<<Search(A,n,k)<<endl;

    return 0;
}