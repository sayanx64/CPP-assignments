#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the array size: "; cin>>n;
    int A[n];
    cout<<"Enter array elems: "; 
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }

    int d;
    cout<<"Enter the value of d: "; cin>>d;

    d = d % n;

    cout<<"Array before rotation: "; 
    for(int i = 0; i<n ; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    // rotating by reversing into 3 parts
    for(int start = 0 , end = d-1; start<end; start++ , end--){
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
    }

    for(int start = d, end = n-1; start<end; start++,end--){
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
    }

    for(int start = 0, end = n-1; start<end; start++, end--){
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
    }

    cout<<"Array after by "<<d<<" positions: "; 
    for(int i = 0; i<n ; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}