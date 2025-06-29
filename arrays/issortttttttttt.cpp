#include<iostream>
using namespace std;
// int main(){
//     int n;
//     printf("Enter array size: "); scanf("%d",&n);
//     int A[n];
//     cout<<"Enter array elements: ";
//     for(int i = 0; i<n; i++){
//         scanf("%d",&A[i]);
//     }
//     int f = 1;
//     for(int i = 1 ; i<n; i++){
//         if(A[i] >= A[i-1]){

//         }
//         else{
//             f=0;
//         }
//     }
//     if(f){
//         cout<<"Array is sorted"<<endl;
//     }
//     else{
//         cout<<"Not sorted MF"<<endl;
//     }
//     return 0;
// }

int main(){
    int n;
    printf("Enter array size: "); scanf("%d",&n);
    int A[n];
    cout<<"Enter array elements: ";
    for(int i = 0; i<n; i++){
        scanf("%d",&A[i]);
    }
    int f = 1;
    for(int i = 0; i<n-1; i++){
        if(A[i] > A[i+1]){
            f = 0;
            break;
        }
    }
    if(f==0){
        cout<<"Not Sorted";
    }
    else{
        cout<<"Sorted";
    }


}