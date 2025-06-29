// inserting in a sorted array:

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: "; cin>>n;
    int A[n];
    cout<<"Enter array elems: ";
    for(int i = 0; i<n; i++){
        scanf("%d",&A[i]);
    }
    int x;
    cout<<"Enter elem to insert : "; cin>>x;

    cout<<"array before insertion: ";
    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl; 

    int i = n-1;
    while(A[i] > x){
        A[i+1] = A[i];
        i--;
    }    
    A[i+1] = x;
    n++;
    cout<<"array after insertion: ";
    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}