#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"enter array size: "; cin>>n;
//     int A[n];
//     cout<<"Enter array elems: ";
//     for(int i = 0; i<n; i++){
//         cin>>A[i];
//     }

//     int c=0;
//     // all non zero elems stored in temp array
//     for(int i =0; i<n; i++){
        
//         if(A[i] != 0){
//             A[c] = A[i];
//             c++;
//         }
//     }

//     for(int i = c; i<n; i++){
//         A[i] = 0;
//     }
//     for(int i = 0; i<n; i++){
//         cout<<A[i]<<" ";
//     }

//     return 0;
// }


//optimal soln:
int main(){
    int n;
    cout<<"enter array size: "; cin>>n;
    int A[n];
    cout<<"Enter array elems: ";
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
    int j = -1;
    for(int i = 0; i<n; i++){
        if(A[i]==0){
            j=i;
            break;
        }
    }
    for(int i = j+1; i<n; i++){
        if(A[i] != 0){
            int t = A[i];
            A[i] = A[j];
            A[j] = t;
            j++;
        }
    }

    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ";
    }
    return 0;
}