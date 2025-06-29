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
    for(int i = 0; i<n; i++){
        if(A[i] == A[i+1]){
            A[i] *= 2;
            A[i+1] = 0;
        }
    }
    

    int j = 0;
    for(int i = 0; i<n; ++i){
        if(A[i]!=0){
            if(i!=j){
                int t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
            j++;
        }
    }
    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}