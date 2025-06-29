#include<iostream>
using namespace std;

void bubsort(int A[],int n){
    for(int i = 0; i<n-1; i++){
        int flag = 0;
        for(int j = 0; j <n-i-1 ; j++){
            if(A[j] > A[j+1]){
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
    cout<<"Enter array size: "; cin>>n;
    int A[n];
    cout<<"enter array elems: ";
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Array before removing duplicates: "; 
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    // sort first
    bubsort(A,n);

    // removing duplicates: TC ->O(n)
    int i = 0;
    for(int j = 1; j<n; j++){
        if(A[j] != A[i]){
            A[i+1] = A[j];
            i++;
        }
    }

    cout<<"Array after removing duplicates: ";
    for(int j = 0; j< i+1; j++){
        cout<<A[j]<<" ";
    }
    cout<<endl;


    return 0;
}