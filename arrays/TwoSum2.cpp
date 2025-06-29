#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: "; cin>>n;
    int arr[n];
    cout<<"Enter a sorted array of size "<<n<< ": ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int t;
    cout<<"Enter target: "; cin>>t;
    int l = 0, r=n-1;
    while(l<r){
        if(((arr[l]+arr[r])==t)){
            cout<<arr[l]<<" & "<<arr[r];
            return 0;
        }
        else if((arr[l]+arr[r])>t){
            r--;
        }
        else{
            l++;
        }
        
    }
    cout<<"not found";
    return 0;
}
