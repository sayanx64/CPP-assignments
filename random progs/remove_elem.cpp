#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter array size: "; cin>>n;
    int A[n];
    cout<<"Enter array elems: ";
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
    int val;
    cout<<"Enter val to remove: "; cin>>val;
    cout<<"Array before removing: ";
    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    int j = 0;
    for(int i = 0; i<n; i++){
        if(A[i] != val){
            A[j] = A[i]; 
            j++;
        }
    }
    n=j;
    cout<<"Array after removing: ";
    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ";
    }


    return 0;
}