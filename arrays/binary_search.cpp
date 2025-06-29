#include<iostream>
using namespace std;


void sort(int A[], int n){
    int flag;
    for(int i = 0; i<n-1; i++){
        flag = 0;
        for(int j = 0; j< n-i-1; j++){
            if(A[j] > A[j+1]){
                // swap 
                int t = A[j];
                A[j] = A[j+1];
                A[j+1] = t;
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
    int k;
    cout<<"Enter array elems: ";
    for(int i = 0; i<n ;i++){
        scanf("%d",&A[i]);
    }

    sort(A,n);

    cout<<"After sorting array : ";
    for(int i = 0; i<n ; ++i){
        cout<<A[i]<<" ";
    }

    cout<<"Enter key to search: "; cin>>k;

    int l = 0, h=n-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(k == A[mid]){
            cout<<"Element found at index "<<mid<<endl;
            return 0;
        }
        else if(k<A[mid]){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    cout<<"key not found"<<endl;
    return 0;
}

// for binary search we have to sort the array first...