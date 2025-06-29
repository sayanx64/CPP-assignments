#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter array size: "; cin>>n;
    int A[n];
    cout<<"Enter array elems: ";
    for(int i = 0; i<n; ++i){
        cin>>A[i];
    }
    cout<<"Array before left rotate by 1 place: "; 
    for(int i = 0; i<n; ++i){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    
    // rotating by 1 place:
    int temp = A[0];
    for(int i = 1; i<n; i++){
        A[i-1] = A[i];
    }
    A[n-1] = temp;
    
    cout<<"Array after: ";
    for(int i = 0; i<n; ++i){
        cout<<A[i]<<" ";
    }

    return 0;
    
}