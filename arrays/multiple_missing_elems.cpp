#include<iostream>
using namespace std;


void missing_elems(int A[],int len){
    int l,h,n;
    l = A[0];
    h = A[len-1];
    n = h - l;
    for(int i = 0; i<n; i++){
        if(l != (A[i]-i)){
            cout<<"\n\nmissing elem is: "<<(i+l)<<endl;
            break;
        }
    }
}

void multiple_miss(int A[], int len){
    
    int diff = A[0]-0;
    cout<<"missing elem: ";
    for(int i=0; i<len; i++){
            
            while(diff < A[i] - i){
                cout<<i+diff<<" ";
                diff++;
            }
    }
}

int main(){
    int len;
    cout<<"Enter array len: "; cin>>len;
    int A[len];
    cout<<"Enter elems: ";
    for(int i = 0; i<len;i++){
        cin>>A[i];
    }
    multiple_miss(A,len);
}